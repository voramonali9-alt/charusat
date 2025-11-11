#include <stdio.h>

int main() {
    int age;
     int Price = 200; 

    printf("Enter visitor's age: ");
    scanf("%d", &age);
    if(age < 0 || age > 120) {
        printf("Invalid age entered!\n");
    }
    else if(age < 12) {
        printf("Child (Age %d)  Free Entry \n", age);
    }
    else if(age >= 60) {
        printf("Senior Citizen (Age %d) Free Entry \n", age);
    }
    else {
        printf("Adult (Age %d)  Ticket Price = ₹%d\n", age, price);
    }

    return 0;
}

