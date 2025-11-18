//monali vora 25ce140
#include <stdio.h>
#include <string.h>
struct Patient {
char name[50]; int age;float temperature; int systolic;int diastolic;};
void inputPatients(struct Patient *p, int n);
void displayPatients(struct Patient *p, int n);
void alertPatients(struct Patient *p, int n);
int main() {
    struct Patient patients[10];
    struct Patient *ptr = patients; 
    int n;
    printf("Enter number of patients (max 10): ");
    scanf("%d", &n);
    getchar();
 inputPatients(ptr, n);
 displayPatients(ptr, n);
 alertPatients(ptr, n);
return 0;}
void inputPatients(struct Patient *p, int n) {
  for (int i = 0; i < n; i++) {
     printf("\nEnter details for Patient %d:\n", i + 1);
  printf("Name: ");
    fgets((p + i)->name, 50, stdin);
    (p + i)->name[strcspn((p + i)->name, "\n")] = 0;
  printf("Age: ");
     scanf("%d", &(p + i)->age);
 printf("Temperature (°F): ");
 scanf("%f", &(p + i)->temperature);
 printf("Systolic Pressure: ");
 scanf("%d", &(p + i)->systolic);
 printf("Diastolic Pressure: ");
 scanf("%d", &(p + i)->diastolic);
 getchar();
    }}
void displayPatients(struct Patient *p, int n) {
  for (int i = 0; i < n; i++) {
  printf("Patient %d:\n", i + 1);
  printf("Name: %s\n", (p + i)->name);
  printf("Age: %d\n", (p + i)->age);
printf("Temperature: %.1f°F\n", (p + i)->temperature);
        printf("Blood Pressure: %d/%d mmHg\n", (p + i)->systolic, (p + i)->diastolic);   }
}
void alertPatients(struct Patient *p, int n) {
 int alertFound = 0;
    for (int i = 0; i < n; i++) {
   if ((p + i)->temperature > 99.0 || (p + i)->systolic > 140 || (p + i)->diastolic > 90) {
            printf("\nPatient: %s requires attention!\n", (p + i)->name);
 if ((p + i)->temperature > 99.0)
                printf("-> Fever detected (%.1f°F)\n", (p + i)->temperature);
  if ((p + i)->systolic > 140 || (p + i)->diastolic > 90)
                printf(" %d/%d mmHg\n", (p + i)->systolic, (p + i)->diastolic);
            alertFound = 1; } }
    if (!alertFound)
        printf("All patients are healthy.\n");
}
