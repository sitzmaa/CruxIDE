#ifndef FILEUTILS_H
#define FILEUTILS_H

#include <string>
#include <fstream>

class FileUtils {
public:
    FileUtils();
    ~FileUtils();
    static std::ifstream openReadFile(const std::string& filepath);
    static std::ofstream openWriteFile(const std::string& filepath);
    static void closeFile(std::ifstream& file);
    static void closeFile(std::ofstream& file);
    static std::string readFile(const std::string& filepath);
    static void writeFile(const std::string& filepath, const std::string& content);
    // TODO: Add utility methods for file operations
};

#endif // FILEUTILS_H
