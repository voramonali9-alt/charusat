#include <stdio.h>

int main() {
    float totalAmount, discount = 0, discountedAmount, gst, finalAmount;
    int isMember;
    char promoCode[20];
    int choice;

 

    do {
        printf("\nMenu:\n");
        printf("1. Process New Customer Bill\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter numbers only.\n");
            while (getchar() != '\n'); // clear input buffer
            continue;
        }

        if (choice == 1) {
            printf("\nEnter total shopping amount (in ₹): ");
            if (scanf("%f", &totalAmount) != 1 || totalAmount < 0) {
                printf(" Invalid input!.\n");
                while (getchar() != '\n');
                continue;
            }

            // Base discount calculation
            if (totalAmount < 1000) {
                discount = 0;
            } else if (totalAmount >= 1000 && totalAmount <= 5000) {
                discount = 0.10 * totalAmount;
            } else if (totalAmount > 5000) {
                discount = 0.20 * totalAmount;
            }

            discountedAmount = totalAmount - discount;

          
            printf("Are you a registered member? (1 for Yes / 0 for No): ");
            scanf("%d", &isMember);
            if (isMember == 1) {
                float memberDiscount = 0.05 * discountedAmount;
                discountedAmount -= memberDiscount;
                printf(" 5%% discount : ₹%.2f\n", memberDiscount);
            }

        
            printf("Enter promo code (if any): ");
            scanf("%s", promoCode);
            if (strcmp(promoCode, "SAVE10") == 0) {
                float promoDiscount = 0.10 * discountedAmount;
                discountedAmount -= promoDiscount;
                printf(" Extra 10%% off: ₹%.2f\n", promoDiscount);
            } else {
                printf("No valid promo code applied.\n");
            }

           
            gst = 0.05 * discountedAmount;
            finalAmount = discountedAmount + gst;

           
            printf("\n===== Customer Bill Summary =====\n");
            printf("Total Amount          : ₹%.2f\n", totalAmount);
            printf("Discount Applied       : ₹%.2f\n", discount);
            printf("Amount After Discount  : ₹%.2f\n", discountedAmount);
            printf("GST (5%%)               : ₹%.2f\n", gst);
           
            printf("Final Amount to Pay    : ₹%.2f\n", finalAmount);
          
        } 
        else if (choice == 2) {
            printf(" Thank you \n");
        } 
        else {
            printf(" Invalid \n");
        }

    } while (choice != 2);

    return 0;
}

