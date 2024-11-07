#ifndef UIMANAGER_H
#define UIMANAGER_H

#include <string>

class UIManager {
public:
    UIManager();
    ~UIManager();
    void initialize();
    void render();
    void setEditorContent(const std::string& content);
    void moveCursor(int x, int y);
    void renderEditorContent(); // Render the text with the cursor
    int getWindowWidth() const { return windowWidth; }
    int getWindowHeight() const { return windowHeight; }

private:
    std::string editorContent;
    int cursorX;
    int cursorY;
    int windowWidth;
    int windowHeight;
    void renderLine(int lineNumber, const std::string& line);
    std::string getLineContent(int lineNumber) const;
};

#endif // UIMANAGER_H
