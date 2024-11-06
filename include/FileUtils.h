#ifndef FILEUTILS_H
#define FILEUTILS_H

class FileUtils {

    public:
        FileUtils();
        ~FileUtils();
        static std::string readFile(const std::string& filepath);
        static void writeFile(const std::string& filepath, const std::string& content);
        // TODO add utility methods for file operations'
};

#endif // FILEUTILS_H
