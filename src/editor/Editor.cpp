#include "Editor.h"
#include "FileUtils.h"
#include <iostream>

// Editor class constructor, outputs initialization message to the console
Editor::Editor() : currentMode(EditorMode::Normal) {
    std::cout << "Editor initialized." << std::endl;
}



// Editor class destructor (no specific cleanup required)
Editor::~Editor() {}

// Opens a file and loads its content into the editor
void Editor::openFile(const std::string& filename) {
    try {
        // Read file content using FileUtils and store it in 'content'
        content = FileUtils::readFile(filename);
        std::cout << "File " << filename << " opened successfully." << std::endl;
    } catch (const std::exception& e) {
        // Output any error messages if the file fails to open
        std::cerr << e.what() << std::endl;
    }
}

// Saves the current content of the editor to a specified file
void Editor::saveFile(const std::string& filename) {
    try {
        // Write the current 'content' to file using FileUtils
        FileUtils::writeFile(filename, content);
        std::cout << "File " << filename << " saved successfully." << std::endl;
    } catch (const std::exception& e) {
        // Output any error messages if the file fails to save
        std::cerr << e.what() << std::endl;
    }
}

void Editor::displayContent() {
    std::cout << content << std::endl;
}

void Editor::switchMode(EditorMode mode) {
    currentMode = mode;
}

EditorMode Editor::getCurrentMode() const {
    return currentMode;
}

std::string Editor::getEditorContent() const {
    return content;
}
void Editor::insertCharacter(char ch) {
    // Add the character at the current cursor position
    content.push_back(ch);
}

void Editor::deleteCharacter() {
    // Remove the last character
    if (!content.empty()) {
        content.pop_back();
    }
}