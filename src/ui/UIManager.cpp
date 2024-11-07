#include "UIManager.h"
#include <iostream>
#include <vector>

UIManager::UIManager() : windowWidth(80), windowHeight(24), cursorX(0), cursorY(0) {
    std::cout << "UIManager initialized." << std::endl;
}

UIManager::~UIManager() {}

void UIManager::initialize() {
    std::cout << "Initializing UI components..." << std::endl;
}

void UIManager::render() {
    renderEditorContent();
}

void UIManager::setEditorContent(const std::string& content) {
    editorContent = content;
}

void UIManager::moveCursor(int x, int y) {
    int oldCursorX = cursorX;
    int oldCursorY = cursorY;
    cursorX = x;
    cursorY = y;
    // Rerender only the lines where the cursor moved from and to
    renderLine(oldCursorY, getLineContent(oldCursorY));
    renderLine(cursorY, getLineContent(cursorY));
}

void UIManager::renderEditorContent() {
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

    for (int i = 0; i < lines.size(); ++i) {
        renderLine(i, lines[i]);
    }
}

void UIManager::renderLine(int lineNumber, const std::string& line) {
    // Move to the line number in the terminal (platform-specific implementation needed)
    std::cout << "\033[" << lineNumber + 1 << "H"; // ANSI escape code to move cursor to line (lineNumber + 1)

    for (int x = 0; x < line.size(); ++x) {
        if (lineNumber == cursorY && x == cursorX) {
            std::cout << '_'; // Render the cursor at the current position
        } else {
            std::cout << line[x];
        }
    }
    // Clear the rest of the line if needed
    for (int x = line.size(); x < windowWidth; ++x) {
        std::cout << ' ';
    }
}

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
    return lineNumber < lines.size() ? lines[lineNumber] : "";
}
