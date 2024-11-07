#ifndef EDITOR_H
#define EDITOR_H

#include <string>

class Editor {
public:
    Editor();
    ~Editor();
    void openFile(const std::string& filename);
    void saveFile(const std::string& filename);
    void displayContent();
    // TODO: Add methods for editing text

    std::string getContent() const { return content; }

private:
    std::string content; // Store file content
};

#endif // EDITOR_H
