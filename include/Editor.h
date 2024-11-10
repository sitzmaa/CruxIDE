#ifndef EDITOR_H
#define EDITOR_H

#include <string>

class Editor {
public:
    Editor();
    ~Editor();

    void openFile(const std::string& filename);
    void saveFile(const std::string& filename);
    void displayContent() const;

    // Additional content editing methods
    void appendText(const std::string& text);
    void clearContent();

private:
    std::string content;
};

#endif // EDITOR_H
