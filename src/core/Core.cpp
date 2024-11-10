#include "Core.h"
#include <iostream>

#if defined(_WIN32) || defined(_WIN64)
#include <conio.h> // Include for Windows-specific console input handling
#else
#include <unistd.h> // POSIX standard library for Unix systems
#include <termios.h> // Library for controlling terminal I/O characteristics (Unix)
#include <fcntl.h> // Library for file control options (Unix)
#endif

// Core class constructor, initializes cursor position and loads initial file content
Core::Core() : cursorX(0), cursorY(0) {
    // Open a file named "example.txt" and load its content into the editor
    editor.openFile("example.txt");
    // Set the editor's content in the UIManager for display purposes
    uiManager.setEditorContent(editor.getEditorContent());  // Updated method call
    // Initialize UI components (prepare screen for rendering)
    uiManager.initialize();
}

// Core class destructor (empty as no specific cleanup is required)
Core::~Core() {}

// Main run loop for the Core class
void Core::run() {
    while (true) { // Infinite loop to keep the editor running until manually exited
        processInput(); // Process user input for navigation or actions
        updateScreen(); // Render the UI updates based on the latest input
    }
}

#if defined(_WIN32) || defined(_WIN64)
// Handles user input specifically for Windows systems using <conio.h>
void Core::processInput() {
    if (_kbhit()) { // Check if a key is pressed on Windows
        char ch = _getch(); // Get the character of the pressed key
        switch (ch) {
            case 'h': // Move cursor left
                cursorX = std::max(0, cursorX - 1); // Ensures cursor doesn't move beyond left boundary
                break;
            case 'j': // Move cursor down
                cursorY = std::min(cursorY + 1, uiManager.getWindowHeight() - 1); // Ensures cursor stays within the window height
                break;
            case 'k': // Move cursor up
                cursorY = std::max(0, cursorY - 1); // Ensures cursor doesn't move above top boundary
                break;
            case 'l': // Move cursor right
                cursorX = std::min(cursorX + 1, uiManager.getWindowWidth() - 1); // Ensures cursor stays within the window width
                break;
            // TODO: Add additional cases to handle other key inputs as necessary
        }
    }
}
#else
// Unix-specific function to check if a key is pressed (similar to _kbhit on Windows)
int _kbhit() {
    struct termios oldt, newt;
    int ch;
    int oldf;

    // Get the current terminal attributes and modify them to disable canonical mode and echo
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);

    // Set non-blocking mode for reading keyboard input
    oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

    ch = getchar(); // Attempt to read a character

    // Restore the old terminal settings and non-blocking mode
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    fcntl(STDIN_FILENO, F_SETFL, oldf);

    if (ch != EOF) {
        ungetc(ch, stdin); // Push character back to the input buffer
        return 1;
    }

    return 0;
}

// Handles user input for Unix systems, similar to Windows but using getchar
void Core::processInput() {
    if (_kbhit()) { // Check if a key is pressed on Unix
        char ch = getchar(); // Get the character of the pressed key
        switch (ch) {
            case 'h': // Move cursor left
                cursorX = std::max(0, cursorX - 1);
                break;
            case 'j': // Move cursor down
                cursorY = std::min(cursorY + 1, uiManager.getWindowHeight() - 1);
                break;
            case 'k': // Move cursor up
                cursorY = std::max(0, cursorY - 1);
                break;
            case 'l': // Move cursor right
                cursorX = std::min(cursorX + 1, uiManager.getWindowWidth() - 1);
                break;
            // TODO: Add additional cases to handle other key inputs as necessary
        }
    }
}
#endif

// Updates the UI to reflect any changes in cursor position or content
void Core::updateScreen() {
    uiManager.moveCursor(cursorX, cursorY); // Move cursor to new position in the UI
    uiManager.render(); // Render the updated content on the screen
}
