#include <stdio.h>
#include <stdlib.h>

int stringLength(char str[]) {
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}
void reverseString(char str[]) {
    int len = stringLength(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}
int compareStrings(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i])
            return str1[i] - str2[i];
        i++;
    }
    return str1[i] - str2[i];
}

void copyString(char source[], char destination[]) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}
void concatenate(char str1[], char str2[]) {
    int i = stringLength(str1);
    int j = 0;
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
}
void toUpperCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }
}
void toLowerCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
}
void capitalizeWords(char str[]) {
    int i = 0;
    int capitalizeNext = 1;
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            capitalizeNext = 1;
        } else if (capitalizeNext && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
            capitalizeNext = 0;
        } else {
            capitalizeNext = 0;
        }
        i++;
    }
}
int main() {
    char note1[200], note2[200], temp[200];
    int choice;

    printf("Enter your first note: ");
    gets(note1);
    do {
      
        printf("1. Calculate Length\n");
        printf("2. Reverse Note\n");
        printf("3. Compare Two Notes\n");
        printf("4. Copy Note\n");
        printf("5. Concatenate Notes\n");
        printf("6. Convert to Upper Case\n");
        printf("7. Convert to Lower Case\n");
        printf("8. Capitalize Each Word\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 
        switch (choice) {
            case 1:
                printf("Length of note = %d\n", stringLength(note1));
                break;
            case 2:
                reverseString(note1);
                printf("Reversed Note: %s\n", note1);
                break;
            case 3:
                printf("Enter second note: ");
                gets(note2);
                if (compareStrings(note1, note2) == 0)
                    printf(" SAME.\n");
                else
                    printf("DIFFERENT.\n");
                break;
            case 4:
                copyString(note1, temp);
                printf("Copied Note: %s\n", temp);
                break;
            case 5:
                printf("Enter second note to concatenate: ");
                gets(note2);
                concatenate(note1, note2);
                printf("Concatenated Note: %s\n", note1);
                break;
            case 6:
                toUpperCase(note1);
                printf("Upper Case Note: %s\n", note1);
                break;
            case 7:
                toLowerCase(note1);
                printf("Lower Case Note: %s\n", note1);
                break;
            case 8:
                capitalizeWords(note1);
                printf("Capitalized Note: %s\n", note1);
                break;
            case 9:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 9);

    return 0;
}
