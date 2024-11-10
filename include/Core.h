#ifndef CORE_H
#define CORE_H

#include "Editor.h"
#include "UIManager.h"

class Core {
public:
    Core();
    ~Core();
    void run();
    void processInput(); // Method to handle user input
    void updateScreen(); // Method to update screen based on state changes
    void handleNormalModeInput(char ch);
    void handleInsertModeInput(char ch);
    void handleVisualModeInput(char ch);
    void handleCommandModeInput(char ch);
private:
    Editor editor;
    UIManager uiManager;
    int cursorX;
    int cursorY;
};

#endif // CORE_H
