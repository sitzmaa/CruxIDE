#ifndef EDITOR_H
#define EDITOR_H

#include <string>
#include "EditorMode.h"

class Editor {
public:
    Editor();
    ~Editor();

    void openFile(const std::string& filename);
    void saveFile(const std::string& filename);
    void displayContent();
    void switchMode(EditorMode mode);
    EditorMode getCurrentMode() const;
    std::string getEditorContent() const;
    void insertCharacter(char ch);
    void deleteCharacter();

    
private:
    std::string content;
    EditorMode currentMode;
};

#endif // EDITOR_H
