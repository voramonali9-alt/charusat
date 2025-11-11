#include <stdio.h>

int main() {
    int choice, quantity;
    float total = 0, discount = 0;
    int burgerQty = 0, pizzaQty = 0, pastaQty = 0, sandwichQty = 0, friesQty = 0;

    printf("Menu:\n");
    printf("1. Burger        - ₹150\n");
    printf("2. Pizza         - ₹200\n");
    printf("3. Pasta         - ₹120\n");
    printf("4. Sandwich      - ₹100\n");
    printf("5. French Fries  - ₹80\n");

    printf("Enter the item number to order (Enter 0 to finish):\n");

    do {
        printf("\nEnter your choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }

        switch (choice) {
            case 1:
                printf("Enter quantity of Burger: ");
                scanf("%d", &quantity);
                if (quantity < 0) {
                    printf(" Invalid\n");
                    break;
                }
                total += 150 * quantity;
                burgerQty += quantity;
                printf("%d Burger(s) added to your order.\n", quantity);
                break;

            case 2:
                printf("Enter quantity of Pizza: ");
                scanf("%d", &quantity);
                if (quantity < 0) {
                    printf("Invalid \n");
                    break;
                }
                total += 200 * quantity;
                pizzaQty += quantity;
                printf("%d Pizza(s) added to your order.\n", quantity);
                break;

            case 3:
                printf("Enter quantity of Pasta: ");
                scanf("%d", &quantity);
                if (quantity < 0) {
                    printf("Invalid \n");
                    break;
                }
                total += 120 * quantity;
                pastaQty += quantity;
                printf("%d Pasta(s) added to your order.\n", quantity);
                break;

            case 4:
                printf("Enter quantity of Sandwich: ");
                scanf("%d", &quantity);
                if (quantity < 0) {
                    printf("Invalid \n");
                    break;
                }
                total += 100 * quantity;
                sandwichQty += quantity;
                printf("%d Sandwich(es) added to your order.\n", quantity);
                break;

            case 5:
                printf("Enter quantity of French Fries: ");
                scanf("%d", &quantity);
                if (quantity < 0) {
                    printf("Invalid \n");
                    break;
                }
                total += 80 * quantity;
                friesQty += quantity;
                printf(" %d French Fries added to your order.\n", quantity);
                break;

            case 0:
                printf("\n bill\n");
                break;

            default:
                printf(" Invalid \n");
        }

    } while (choice != 0);

  
    if (total > 500) {
        discount = 0.10 * total;
        total -= discount;
        printf("\n 10%% discount \n");
    }


   
    if (burgerQty > 0)   printf("Burger        x %d = ₹%d\n", burgerQty, burgerQty * 150);
    if (pizzaQty > 0)    printf("Pizza         x %d = ₹%d\n", pizzaQty, pizzaQty * 200);
    if (pastaQty > 0)    printf("Pasta         x %d = ₹%d\n", pastaQty, pastaQty * 120);
    if (sandwichQty > 0) printf("Sandwich      x %d = ₹%d\n", sandwichQty, sandwichQty * 100);
    if (friesQty > 0)    printf("French Fries  x %d = ₹%d\n", friesQty, friesQty * 80);

   
    printf("Discount Applied   : ₹%.2f\n", discount);
    printf("Total Amount Payable: ₹%.2f\n", total);
  
    printf("Thank you n");

    return 0;
}
