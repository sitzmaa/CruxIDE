#include "Editor.h"
#include "FileUtils.h"
#include <iostream>

// Editor class constructor, outputs initialization message to the console
Editor::Editor() {
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

// Displays the content of the file to the console (for debugging or viewing purposes)
void Editor::displayContent() const {
    std::cout << content << std::endl;
}

// Adds additional text to the content in the editor
void Editor::appendText(const std::string& text) {
    content += text;
}

// Clears all content in the editor
void Editor::clearContent() {
    content.clear();
}
