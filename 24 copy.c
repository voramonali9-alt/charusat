#include <stdio.h>
int noteLength(char note[]) {
    int i = 0;
    while (note[i] != '\0') i++;
    return i;
}

void reverse(char note[]) {
    int len = noteLength(note);
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        char temp = note[i];
        note[i] = note[j];
        note[j] = temp;
    }
}

int compare(char a[], char b[]) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i]) return a[i] - b[i];
        i++;
    }
    return a[i] - b[i];
}

void copy(char src[], char dest[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}
void concatenate(char a[], char b[]) {
    int i = 0, j = 0;
    while (a[i] != '\0') i++;
    while (b[j] != '\0') {
        a[i] = b[j];
        i++; j++;
    }
    a[i] = '\0';
}
void toUpper(char note[]) {
    for (int i = 0; note[i] != '\0'; i++) {
        if (note[i] >= 'a' && note[i] <= 'z')
            note[i] = note[i] - 32;
    }
}
void toLower(char note[]) {
    for (int i = 0; note[i] != '\0'; i++) {
        if (note[i] >= 'A' && note[i] <= 'Z')
            note[i] = note[i] + 32;
    }
}
void capitalizeWords(char note[]) {
    int capNext = 1;
    for (int i = 0; note[i] != '\0'; i++) {
        if (note[i] == ' ') {
            capNext = 1;
        } else if (capNext && note[i] >= 'a' && note[i] <= 'z') {
            note[i] = note[i] - 32;
            capNext = 0;
        } else {
            capNext = 0;
        }
    }
}

int main() {
    char note[1000] = "";
    char temp[1000];
    int choice;

    printf("Enter your initial note: ");
    fgets(note, 1000, stdin);

    int len = noteLength(note);
    if (note[len - 1] == '\n') note[len - 1] = '\0';

    do {
        printf("\n--- Note Manager ---\n");
        printf("1. Length\n2. Reverse\n3. Compare\n4. Copy\n5. Concatenate\n");
        printf("6. Upper Case\n7. Lower Case\n8. Capitalize Words\n0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                printf("Length: %d\n", noteLength(note));
                break;
            case 2:
                reverse(note);
                printf("Reversed: %s\n", note);
                break;
            case 3:
                printf("Enter another note: ");
                fgets(temp, 1000, stdin);
                len = noteLength(temp);
                if (temp[len - 1] == '\n') temp[len - 1] = '\0';
                if (compare(note, temp) == 0)
                    printf("Notes are equal.\n");
                else
                    printf("Notes are different.\n");
                break;
            case 4:
                copy(note, temp);
                printf("Copied Note: %s\n", temp);
                break;
            case 5:
                printf("Enter note to concatenate: ");
                fgets(temp, 1000, stdin);
                len = noteLength(temp);
                if (temp[len - 1] == '\n') temp[len - 1] = '\0';
                concatenate(note, temp);
                printf("Concatenated Note: %s\n", note);
                break;
            case 6:
                toUpper(note);
                printf("Upper Case: %s\n", note);
                break;
            case 7:
                toLower(note);
                printf("Lower Case: %s\n", note);
                break;
            case 8:
                capitalizeWords(note);
                printf("Capitalized: %s\n", note);
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 0);

    return 0;
}

