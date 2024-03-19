#include <stdio.h>
#include <ctype.h>
int main() {
    char c;
    int charCount = 0, wordCount = 0, lineCount = 0;
    int inWord = 0; 
    printf("Enter text (Ctrl+D to end):\n");
    while ((c = getchar()) != EOF) {
        charCount++;
        if (c == '\n')
            lineCount++;
        if (!isspace(c)) {
            if (!inWord) {
                wordCount++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }
    if (charCount > 0 && c != '\n')
        lineCount++;
    printf("\nCharacter count: %d\n", charCount);
    printf("Word count: %d\n", wordCount);
    printf("Line count: %d\n", lineCount);
    return 0;
}
