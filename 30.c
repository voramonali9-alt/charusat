//monali vora 25ce140
#include <stdio.h>
#include <string.h>
struct Customer {
    int id;
    char name[50];
    float units;
    float bill;};
float calculateBill(float units) {
    float amount = 0;
    if (units <= 100)
     amount = units * 1.50;
    else if (units <= 200)
     amount = 100 * 1.50 + (units - 100) * 2.00;
    else if (units <= 300)
     amount = 100 * 1.50 + 100 * 2.00 + (units - 200) * 3.00;
    else
    amount = 100 * 1.50 + 100 * 2.00 + 100 * 3.00 + (units - 300) * 5.00;
return amount;
}
void inputData(struct Customer *c, int n) {
    for (int i = 0; i < n; i++) {
 printf("\nEnter details for Customer %d:\n", i + 1);
 printf("Customer ID: ");
scanf("%d", &(c + i)->id);
 getchar();
printf("Name: ");
fgets((c + i)->name, 50, stdin);
(c + i)->name[strcspn((c + i)->name, "\n")] = 0;
 printf("Units consumed: ");
 scanf("%f", &(c + i)->units);
 (c + i)->bill = calculateBill((c + i)->units); }
}
void displayData(struct Customer *c, int n) {
    printf("\nELECTRICITY BILL SUMMARY \n");
  printf("%-10s %-20s %-15s %-10s\n", "ID", "NAME", "UNITS", "BILL (₹)");
  for (int i = 0; i < n; i++) {
        printf("%-10d %-20s %-15.2f %-10.2f\n",
               (c + i)->id, (c + i)->name, (c + i)->units, (c + i)->bill);
    }int main() {
    struct Customer c[10];
    int n;
 printf("Enter number of customers (max 10): ");
    scanf("%d", &n);
    getchar();
 inputData(c, n);
    displayData(c, n);
 return 0;
}
