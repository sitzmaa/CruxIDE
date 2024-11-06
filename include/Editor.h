#ifndef EDITOR_H
#define EDITOR_H

class Editor {
    public:
        Editor();
        ~Editor();
        void openFile(const std::string& filename);
        void saveFile(const std::string& filename);
        void displayContent();
        // TODO: add methods for editing text
};

#endif // EDITOR_H
