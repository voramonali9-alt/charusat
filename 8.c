#include <stdio.h>

int main() {
    int choice;
    int age;
  do {
        printf("\nMenu:\n");
        printf("1. Check Eligibility\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter numbers only.\n");
            while (getchar() != '\n');
            continue;
        }

        switch (choice) {
            case 1:
                printf("Enter your age: ");
                if (scanf("%d", &age) != 1) {
                    printf("Invalid input! Please enter a valid number for age.\n");
                    while (getchar() != '\n'); // clear input buffer
                    break;
                }

                if (age < 0) {
                    printf(" Invalid age! Age cannot be negative.\n");
                }
                else if (age < 18) {
                    printf(" you are not eligible to open a savings account yet.\n");
                }
                else if (age >= 18 && age < 60) {
                    printf(" You are eligible for a Regular Savings Account.\n");
                }
                else if (age >= 60) {
                    printf(" You are eligible for a Senior Citizen Savings Account.\n");
                }
                break;

            case 2:
                printf("Thank you \n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while (choice != 2);

    return 0;
}
