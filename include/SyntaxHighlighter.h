#ifndef SYNTAXHIGHLIGHTER_H
#define SYNTAXHIGHLIGHTER_H
#include <string>
class SyntaxHighlighter {
    public:
        SyntaxHighlighter();
        ~SyntaxHighlighter();
        void highlightSyntax(const std::string& code);
        // TODO Add methods for defining syntax rules
};

#endif //SYNTAXHIGHLIGHTER_H
