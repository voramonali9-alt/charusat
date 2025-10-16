#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Fixed test cases
    int testCases[] = {0, 100, -40};
    printf("Celsius   Fahrenheit\n");
    printf("---------------------\n");
    for(int i = 0; i < 3; i++) {
        celsius = testCases[i];
        fahrenheit = (celsius * 9.0 / 5.0) + 32;
        printf("%7.2f   %10.2f\n", celsius, fahrenheit);
    }

    return 0;
}
