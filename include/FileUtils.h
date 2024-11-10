#ifndef FILEUTILS_H
#define FILEUTILS_H

#include <string>
#include <fstream>
#include <stdexcept>
#include <memory>
#include <mutex>

class FileUtils {
public:
    // Custom exceptions for file operations
    class FileOpenException : public std::runtime_error {
    public:
        explicit FileOpenException(const std::string& message) : std::runtime_error(message) {}
    };

    class FileWriteException : public std::runtime_error {
    public:
        explicit FileWriteException(const std::string& message) : std::runtime_error(message) {}
    };

    // Static methods for file operations
    static std::unique_ptr<std::ifstream> openReadFile(const std::string& filepath);
    static std::unique_ptr<std::ofstream> openWriteFile(const std::string& filepath);
    static std::string readFile(const std::string& filepath);
    static void writeFile(const std::string& filepath, const std::string& content);
    static void appendToFile(const std::string& filepath, const std::string& content);
    static size_t getFileSize(const std::string& filepath);
    static std::string getLastModifiedTime(const std::string& filepath);

private:
    static std::mutex fileMutex; // For thread-safe file operations
};

#endif // FILEUTILS_H
