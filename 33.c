#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    fp = fopen("input.txt", "r");

    if (fp == NULL) {
        printf("File not found!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == ' ' || ch == '\n' || ch == '\t') {
            if (inWord) {
                words++;
                inWord = 0;
            }
        } else {
            inWord = 1;
        }

        if (ch == '\n')
            lines++;
    }

    if (inWord)
        words++;

    fclose(fp);

    printf(": %d\n", characters);
    printf(" %d\n", words);
    printf(" %d\n", lines);

    return 0;
}
