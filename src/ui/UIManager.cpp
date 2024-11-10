#include "UIManager.h"
#include <iostream>
#include <vector>

// UIManager class constructor, sets default window dimensions and cursor position
UIManager::UIManager() : windowWidth(80), windowHeight(24), cursorX(0), cursorY(0) {
    std::cout << "UIManager initialized." << std::endl;
}

// UIManager class destructor (no specific cleanup required)
UIManager::~UIManager() {}

// Initializes UI components, printing to the console
void UIManager::initialize() {
    std::cout << "Initializing UI components..." << std::endl;
}

// Renders the entire editor content to the screen
void UIManager::render() {
    renderEditorContent(); // Calls function to render each line of content
}

// Sets the content that the editor will display on the UI
void UIManager::setEditorContent(const std::string& content) {
    editorContent = content; // Stores content to display
}

// Moves the cursor to a specified position on the screen and updates rendering
void UIManager::moveCursor(int x, int y) {
    int oldCursorX = cursorX;
    int oldCursorY = cursorY;
    cursorX = x;
    cursorY = y;
    // Render only the lines where the cursor moved from and to, improving efficiency
    renderLine(oldCursorY, getLineContent(oldCursorY));
    renderLine(cursorY, getLineContent(cursorY));
}

// Renders all content in the editor, line by line
void UIManager::renderEditorContent() {
    std::vector<std::string> lines;
    std::string line;
    for (char c : editorContent) {
        if (c == '\n') {
            lines.push_back(line); // Store each line separately
            line.clear();
        } else {
            line += c; // Build up each line
        }
    }
    if (!line.empty()) {
        lines.push_back(line); // Include the last line if it doesn't end with a newline
    }

    // Render each line by calling renderLine
    for (int i = 0; i < lines.size(); ++i) {
        renderLine(i, lines[i]);
    }
}

// Renders a specific line with cursor position handling
void UIManager::renderLine(int lineNumber, const std::string& line) {
    // Move to the correct line position, and display the line with cursor indication
    if (lineNumber == cursorY) {
        std::string renderedLine = line.substr(0, cursorX) + '|' + line.substr(cursorX);
        std::cout << renderedLine << std::endl;
    } else {
        std::cout << line << std::endl;
    }
}

// Gets the specific content of a line for rendering
std::string UIManager::getLineContent(int lineNumber) const {
    std::vector<std::string> lines;
    std::string line;
    for (char c : editorContent) {
        if (c == '\n') {
            lines.push_back(line);
            line.clear();
        } else {
            line += c;
        }
    }
    if (!line.empty()) {
        lines.push_back(line);
    }
    return (lineNumber < lines.size()) ? lines[lineNumber] : "";
}

// Gets the editor window's width
int UIManager::getWindowWidth() const {
    return windowWidth;
}

// Gets the editor window's height
int UIManager::getWindowHeight() const {
    return windowHeight;
}
