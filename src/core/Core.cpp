#include "Core.h"
#include <iostream>

#if defined(_WIN32) || defined(_WIN64)
#include <conio.h> // For Windows
#else
#include <unistd.h>
#include <termios.h>
#include <fcntl.h>
#endif

Core::Core() : cursorX(0), cursorY(0) {
    editor.openFile("example.txt");
    uiManager.setEditorContent(editor.getContent());
    uiManager.initialize();
}

Core::~Core() {}

void Core::run() {
    while (true) {
        processInput();
        updateScreen();
    }
}

#if defined(_WIN32) || defined(_WIN64)
void Core::processInput() {
    if (_kbhit()) { // Check if a key is pressed (Windows)
        char ch = _getch(); // Get the pressed key (Windows)
        switch (ch) {
            case 'h': // Move left
                cursorX = std::max(0, cursorX - 1);
                break;
            case 'j': // Move down
                cursorY = std::min(cursorY + 1, uiManager.getWindowHeight() - 1);
                break;
            case 'k': // Move up
                cursorY = std::max(0, cursorY - 1);
                break;
            case 'l': // Move right
                cursorX = std::min(cursorX + 1, uiManager.getWindowWidth() - 1);
                break;
            // TODO: Add more cases for different inputs
        }
    }
}
#else
int _kbhit() {
    struct termios oldt, newt;
    int ch;
    int oldf;

    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

    ch = getchar();

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    fcntl(STDIN_FILENO, F_SETFL, oldf);

    if (ch != EOF) {
        ungetc(ch, stdin);
        return 1;
    }

    return 0;
}

void Core::processInput() {
    if (_kbhit()) { // Check if a key is pressed (Unix)
        char ch = getchar(); // Get the pressed key (Unix)
        switch (ch) {
            case 'h': // Move left
                cursorX = std::max(0, cursorX - 1);
                break;
            case 'j': // Move down
                cursorY = std::min(cursorY + 1, uiManager.getWindowHeight() - 1);
                break;
            case 'k': // Move up
                cursorY = std::max(0, cursorY - 1);
                break;
            case 'l': // Move right
                cursorX = std::min(cursorX + 1, uiManager.getWindowWidth() - 1);
                break;
            // TODO: Add more cases for different inputs
        }
    }
}
#endif

void Core::updateScreen() {
    uiManager.moveCursor(cursorX, cursorY);
    uiManager.render();
}
