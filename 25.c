//monali vora 25ce140
#include <stdio.h>
#include <string.h>
struct Book {
    char title[50];
    int available; };
void displayBooks(struct Book library[], int totalBooks);
int searchBook(struct Book library[], int totalBooks, char bookName[]);
void borrowBook(struct Book library[], int totalBooks, char bookName[]);
void returnBook(struct Book library[], int totalBooks, char bookName[]);
float calculateFine(int daysLate);
int main() {
    struct Book library[5] = {
        {"C Programming", 1},
        {"Data Structures", 1},
        {"Operating System", 1},
        {"Database Systems", 1},
        {"AI Fundamentals", 1}  };
 int totalBooks = 5;
    int choice, days;
    char name[50];
    do {printf("1. Display All Books\n");
        printf("2. Search Book\n");
        printf("3. Borrow Book\n");
        printf("4. Return Book\n");
        printf("5. Calculate Fine\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
 switch (choice) {
            case 1:
                displayBooks(library, totalBooks);
                break;

            case 2:
                printf("Enter book name to search: ");
                gets(name);
                if (searchBook(library, totalBooks, name))
                    printf("Book found in library.\n");
                else
                    printf("Book not found.\n");
                break;

            case 3:
                printf("Enter book name to borrow: ");
                gets(name);
                borrowBook(library, totalBooks, name);
                break;

            case 4:
                printf("Enter book name to return: ");
                gets(name);
                returnBook(library, totalBooks, name);
                break;

            case 5:
                printf("Enter number of days book is overdue: ");
                scanf("%d", &days);
                printf("Fine: ₹%.2f\n", calculateFine(days));
                break;

            case 0:
                printf("Exiting system. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 0);

    return 0;
}
void displayBooks(struct Book library[], int totalBooks) {
    printf("\n--- Book List ---\n");
    for (int i = 0; i < totalBooks; i++) {
        printf("%d. %-25s : %s\n", i + 1, library[i].title,
               library[i].available ? "Available" : "Borrowed");  }
}
int searchBook(struct Book library[], int totalBooks, char bookName[]) {
    for (int i = 0; i < totalBooks; i++) {
        if (strcasecmp(library[i].title, bookName) == 0)
            return 1;   }
    return 0; 
void borrowBook(struct Book library[], int totalBooks, char bookName[]) {
    for (int i = 0; i < totalBooks; i++) {
        if (strcasecmp(library[i].title, bookName) == 0) {
            if (library[i].available) {
                library[i].available = 0;
                printf("You have successfully borrowed '%s'.\n", library[i].title);
            } else {
                printf("Sorry! '%s' is already borrowed.\n", library[i].title);
            }
            return;  }
    }
    printf("Book not found in library.\n");
}
void returnBook(struct Book library[], int totalBooks, char bookName[]) {
    for (int i = 0; i < totalBooks; i++) {
        if (strcasecmp(library[i].title, bookName) == 0) {
            if (!library[i].available) {
                library[i].available = 1;
                printf("'%s' has been successfully returned.\n", library[i].title);
            } else {
                printf("This book was not borrowed.\n"); }
            return; }  }
    printf("Book not found in library.\n");
}
float calculateFine(int daysLate) {
    if (daysLate <= 0)
        return 0.0;
    else if (daysLate <= 5)
        return daysLate * 2.0;
    else if (daysLate <= 10)
        return daysLate * 5.0;
    else
        return daysLate * 10.0;
}
