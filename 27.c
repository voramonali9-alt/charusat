//monali vora 25ce140
#include <stdio.h>
void generatesavings(int n) {
    long long first = 1, second = 1, next;
    long long total = 0;
    if (n <= 0) {
        printf("Invalid\n");
        return;  }if (n >= 1) {
        printf("Month 1: ₹%lld\n", first);
        total += first;
    }    if (n >= 2) {
        printf("Month 2: ₹%lld\n", second);
        total += second;
    }
    for (int i = 3; i <= n; i++) {
        next = first + second;
        printf("Month %d: ₹%lld\n", i, next);
        total += next;
        first = second;
        second = next;
    } printf("\n Total Savings after %d months: ₹%lld\n", n, total);
}int main() {
    int n;
printf("Enter the number of months: ");
    scanf("%d", &n);
    generatesavings(n);
 return 0;
}
