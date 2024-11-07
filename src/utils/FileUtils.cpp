#include "FileUtils.h"
#include <stdexcept>

FileUtils::FileUtils() {}

FileUtils::~FileUtils() {}

std::ifstream FileUtils::openReadFile(const std::string& filepath) {
    std::ifstream file(filepath);
    if (!file.is_open()) {
        throw std::runtime_error("Unable to open file: " + filepath);
    }
    return file;
}

std::ofstream FileUtils::openWriteFile(const std::string& filepath) {
    std::ofstream file(filepath);
    if (!file.is_open()) {
        throw std::runtime_error("Unable to open file: " + filepath);
    }
    return file;
}

void FileUtils::closeFile(std::ifstream& file) {
    if (file.is_open()) {
        file.close();
    }
}

void FileUtils::closeFile(std::ofstream& file) {
    if (file.is_open()) {
        file.close();
    }
}

std::string FileUtils::readFile(const std::string& filepath) {
    std::ifstream file = openReadFile(filepath);
    std::string content((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
    closeFile(file);
    return content;
}

void FileUtils::writeFile(const std::string& filepath, const std::string& content) {
    std::ofstream file = openWriteFile(filepath);
    file << content;
    closeFile(file);
}
