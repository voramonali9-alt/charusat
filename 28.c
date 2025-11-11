#include <stdio.h>
#include <string.h>


union LibraryItem {
    struct {
        char title[50];
        char author[30];
        float price;
    } book;

    struct {
        char title[50];
        int volume;
        int issue;
    } journal;
};


struct Record {
    int id;
    int type;
    union LibraryItem item;
};

int main() {
    struct Record records[10];
    int n, choice;

   
    scanf("%d", &n);
    getchar(); 

    for (int i = 0; i < n; i++) {
        printf("\nRecord %d:\n", i + 1);
        printf("Enter type (1 for Book, 2 for Journal): ");
        scanf("%d", &records[i].type);
        getchar();

        records[i].id = i + 1;

        if (records[i].type == 1) {
           
            fgets(records[i].item.book.title, 50, stdin);
            records[i].item.book.title[strcspn(records[i].item.book.title, "\n")] = 0;

           
            fgets(records[i].item.book.author, 30, stdin);
            records[i].item.book.author[strcspn(records[i].item.book.author, "\n")] = 0;

           
            scanf("%f", &records[i].item.book.price);
            getchar();
        }
        else if (records[i].type == 2) {
            printf("Enter Journal Title: ");
            fgets(records[i].item.journal.title, 50, stdin);
            records[i].item.journal.title[strcspn(records[i].item.journal.title, "\n")] = 0;

            printf("Enter Volume Number: ");
            scanf("%d", &records[i].item.journal.volume);
            printf("Enter Issue Number: ");
            scanf("%d", &records[i].item.journal.issue);
            getchar();
        } else {
            printf("Invalid .\n");
        }
    }

  
    for (int i = 0; i < n; i++) {
        printf("\nRecord ID: %d\n", records[i].id);
        if (records[i].type == 1) {
          
            printf("Title: %s\n", records[i].item.book.title);
            printf("Author: %s\n", records[i].item.book.author);
            printf("Price: ₹%.2f\n", records[i].item.book.price);
        } else if (records[i].type == 2) {
            
            printf(": %s\n", records[i].item.journal.title);
            printf(" %d\n", records[i].item.journal.volume);
            printf(" %d\n", records[i].item.journal.issue);
        }
    }

    printf("\n %zu bytes\n", sizeof(union LibraryItem));

    return 0;
}
