#include <stdio.h>

int main() {
    float marks;
    char grade;
   printf("Enter marks (0 - 100): ");
    if (scanf("%f", &marks) != 1) {
        printf(" Invalid \n");
        return 0;
    }

  
    if (marks < 0 || marks > 100) {
        printf(" Invalid \n");
        return 0;
    }


    grade = (marks >= 90) ? 'A' :
            (marks >= 80) ? 'B' :
            (marks >= 70) ? 'C' :
            (marks >= 60) ? 'D' : 'F';

   
    printf("\nMarks: %.2f\n", marks);
    printf("Grade: %c\n", grade);


    (grade == 'A') ? printf(" Excellent!\n") :
    (grade == 'B') ? printf(" Very Good!\n") :
    (grade == 'C') ? printf(" Good\n") :
    (grade == 'D') ? printf(" Needs more efforts\n") :
                     printf(" Fail.\n");

    return 0;
}
