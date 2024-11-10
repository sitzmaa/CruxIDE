#include "FileUtils.h"
#include <sys/stat.h>
#include <chrono>
#include <iomanip>
#include <sstream>

std::mutex FileUtils::fileMutex;

// Opens a file for reading and returns a unique_ptr to the ifstream
std::unique_ptr<std::ifstream> FileUtils::openReadFile(const std::string& filepath) {
    std::lock_guard<std::mutex> lock(fileMutex);
    auto file = std::make_unique<std::ifstream>(filepath);
    if (!file->is_open()) {
        throw FileOpenException("Unable to open file for reading: " + filepath);
    }
    return file;
}

// Opens a file for writing and returns a unique_ptr to the ofstream
std::unique_ptr<std::ofstream> FileUtils::openWriteFile(const std::string& filepath) {
    std::lock_guard<std::mutex> lock(fileMutex);
    auto file = std::make_unique<std::ofstream>(filepath);
    if (!file->is_open()) {
        throw FileWriteException("Unable to open file for writing: " + filepath);
    }
    return file;
}

// Reads the entire content of a file into a string
std::string FileUtils::readFile(const std::string& filepath) {
    auto file = openReadFile(filepath);
    std::string content((std::istreambuf_iterator<char>(*file)), std::istreambuf_iterator<char>());
    return content;
}

// Writes a string to a file, overwriting any existing content
void FileUtils::writeFile(const std::string& filepath, const std::string& content) {
    auto file = openWriteFile(filepath);
    *file << content;
}

// Appends a string to the end of a file
void FileUtils::appendToFile(const std::string& filepath, const std::string& content) {
    std::lock_guard<std::mutex> lock(fileMutex);
    std::ofstream file(filepath, std::ios::app);
    if (!file.is_open()) {
        throw FileWriteException("Unable to open file for appending: " + filepath);
    }
    file << content;
}

// Retrieves the size of the specified file
size_t FileUtils::getFileSize(const std::string& filepath) {
    struct stat stat_buf;
    int rc = stat(filepath.c_str(), &stat_buf);
    return rc == 0 ? stat_buf.st_size : throw FileOpenException("Unable to get file size: " + filepath);
}

// Retrieves the last modified time of the file as a string
std::string FileUtils::getLastModifiedTime(const std::string& filepath) {
    struct stat stat_buf;
    if (stat(filepath.c_str(), &stat_buf) != 0) {
        throw FileOpenException("Unable to get file modification time: " + filepath);
    }
    auto mod_time = std::chrono::system_clock::from_time_t(stat_buf.st_mtime);
    auto time = std::chrono::system_clock::to_time_t(mod_time);
    std::stringstream time_stream;
    time_stream << std::put_time(std::localtime(&time), "%Y-%m-%d %H:%M:%S");
    return time_stream.str();
}
