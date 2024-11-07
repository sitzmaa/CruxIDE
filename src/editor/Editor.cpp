#include "Editor.h"
#include "FileUtils.h"
#include <iostream>

Editor::Editor() {
    std::cout << "Editor initialized." << std::endl;
}

Editor::~Editor() {}

void Editor::openFile(const std::string& filename) {
    try {
        content = FileUtils::readFile(filename);
        std::cout << "File " << filename << " opened successfully." << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}

void Editor::saveFile(const std::string& filename) {
    try {
        FileUtils::writeFile(filename, content);
        std::cout << "File " << filename << " saved successfully." << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}

void Editor::displayContent() {
    std::cout << content << std::endl;
    // TODO: Add methods for editing text
}
