#include <stdio.h>

int main() {
    int numbers[25];
    int positive = 0, negative = 0, even = 0, odd = 0;


    for (int i = 0; i < 25; i++) {
        printf(" %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
  for (int i = 0; i < 25; i++) {
        if (numbers[i] > 0)
            positive++;
        else if (numbers[i] < 0)
            negative++;
        
        if (numbers[i] % 2 == 0)
            even++;
        else
            odd++;
    }
  printf("Total Positive Numbers: %d\n", positive);
    printf("Total Negative Numbers: %d\n", negative);
    printf("Total Even Numbers: %d\n", even);
    printf("Total Odd Numbers: %d\n", odd);

    return 0;
}
