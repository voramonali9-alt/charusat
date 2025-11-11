#include <stdio.h>

int main() {
    int balance = 5000;      
    int amount;               
    int choice;               
    char again;              
  
    printf("Your starting balance is ₹%d\n", balance);

    do {
      
        printf("1. Withdraw Money\n");
        printf("2. Deposit Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
     
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
                printf("Enter amount to withdraw");
                scanf("%d", &amount);

                if (amount <= 0) {
                    printf("Invalid amount. Please enter a positive value.\n");
                } 
                else if (amount > balance) {
                    printf("Insufficient balance!\n");
                } 
                else {
                    balance -= amount;
                    printf("Please collect your cash.\n");
                    printf("Remaining Balance: ₹%d\n", balance);
                }
                break;

            case 2: 
                printf("Enter amount to deposit: ₹");
                scanf("%d", &amount);

                if (amount <= 0) {
                    printf("Invalid deposit amount. Please enter a positive value.\n");
                } 
                else {
                    balance += amount;
                    printf("Amount deposited successfully.\n");
                    printf("Updated Balance: ₹%d\n", balance);
                }
                break;

            case 3:
                printf("Your current balance is: ₹%d\n", balance);
                break;

     case 4 :      printf("Thank you for banking with National Bank of Bharat.\n");
                return 0;

            default:
                printf("Invalid choice. Please select from the menu.\n");   }
 printf("\nDo you want to perform another transaction? (Y/N): ");
        scanf(" %c", &again); 
    } while (again == 'Y' || again == 'y');

    printf("\nThank you for using National Bank of Bharat ATM!\n");
    printf("Final Balance: ₹%d\n", balance);
    printf("Have a great day!\n");

    return 0;
}
