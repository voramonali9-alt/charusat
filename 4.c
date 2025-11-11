#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{

    printf("Data Type\t\tSize (Bytes)\tMinimum Value\t\tMaximum Value\n");
printf("char\t\t\t%zu\t\t%d\t\t\t%d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
   printf("unsigned char\t\t%zu\t\t%d\t\t\t%d\n", sizeof(unsigned char), 0, UCHAR_MAX);
    printf("short\t\t\t%zu\t\t%d\t\t\t%d\n", sizeof(short), SHRT_MIN, SHRT_MAX);
    printf("unsigned short\t\t%zu\t\t%d\t\t\t%d\n", sizeof(unsigned short), 0, USHRT_MAX);
    printf("int\t\t\t%zu\t\t%d\t\t%d\n", sizeof(int), INT_MIN, INT_MAX);
   printf("unsigned int\t\t%zu\t\t0\t\t\t%u\n", sizeof(unsigned int), UINT_MAX);
    printf("long\t\t\t%zu\t\t%ld\t%ld\n", sizeof(long), LONG_MIN, LONG_MAX);
    printf("unsigned long\t\t%zu\t\t0\t\t\t%lu\n", sizeof(unsigned long), ULONG_MAX);
    printf("long long\t\t%zu\t\t%lld\t%lld\n", sizeof(long long), LLONG_MIN, LLONG_MAX);
    printf("unsigned long long\t%zu\t\t0\t\t\t%llu\n", sizeof(unsigned long long), ULLONG_MAX);
  printf("float\t\t\t%zu\t\t%.3e\t%.3e\n", sizeof(float), FLT_MIN, FLT_MAX);
    printf("double\t\t\t%zu\t\t%.3e\t%.3e\n", sizeof(double), DBL_MIN, DBL_MAX);
  printf("long double\t\t%zu\t\t%.3Le\t%.3Le\n", sizeof(long double), LDBL_MIN, LDBL_MAX);
  int choice;
    long long num;
    printf("1. char\n2. int\n3. long\n4. long long\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter any number: ");
    scanf("%lld", &num);

    if (choice == 1) {
        if (num >= CHAR_MIN && num <= CHAR_MAX)
            printf("%lld fits in char.\n", num);
        else
            printf("%lld does not fit in char.\n", num);
    }
    else if (choice == 2) {
        if (num >= INT_MIN && num <= INT_MAX)
            printf("%lld fits in int.\n", num);
        else
            printf("%lld does not fit in int.\n", num);  }
    else if (choice == 3) {
        if (num >= LONG_MIN && num <= LONG_MAX)
            printf("%lld fits in long.\n", num);
        else
            printf("%lld does not fit in long.\n", num);  }
    else if (choice == 4) {
        if (num >= LLONG_MIN && num <= LLONG_MAX)
            printf("%lld fits in long long.\n", num);
        else
            printf("%lld does not fit in long long.\n", num);
    }
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
