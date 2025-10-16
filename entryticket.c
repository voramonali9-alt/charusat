#include <stdio.h>

int main() {
    int age;
    const int TICKET_PRICE = 200; // constant fare for adults

    printf("Enter visitor's age: ");
    scanf("%d", &age);

    // validate age
    if(age < 0 || age > 120) {
        printf("Error: Invalid age entered!\n");
    }
    else if(age < 12) {
        printf("Child (Age %d) → Free Entry ✅\n", age);
    }
    else if(age >= 60) {
        printf("Senior Citizen (Age %d) → Free Entry ✅\n", age);
    }
    else {
        printf("Adult (Age %d) → Ticket Price = ₹%d\n", age, TICKET_PRICE);
    }

    return 0;
}
