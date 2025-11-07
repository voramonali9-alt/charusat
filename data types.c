#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
    printf("char size = %zu, min = %d, max = %d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("unsigned char size = %zu, min = %d, max = %u\n", sizeof(unsigned char), 0, UCHAR_MAX);
  printf("short size = %zu, min = %d, max = %d\n", sizeof(short), SHRT_MIN, SHRT_MAX);
    printf("unsigned short size = %zu, min = %d, max = %u\n", sizeof(unsigned short), 0, USHRT_MAX);
  printf("int size = %zu, min = %d, max = %d\n", sizeof(int), INT_MIN, INT_MAX);
    printf("unsigned int size = %zu, min = %d, max = %u\n", sizeof(unsigned int), 0, UINT_MAX);
printf("long size = %zu, min = %ld, max = %ld\n", sizeof(long), LONG_MIN, LONG_MAX);
   printf("unsigned long size = %zu, min = %d, max = %lu\n", sizeof(unsigned long), 0, ULONG_MAX);
 printf("float size = %zu, min = %e, max = %e\n", sizeof(float), FLT_MIN, FLT_MAX);
    printf("double size = %zu, min = %e, max = %e\n", sizeof(double), DBL_MIN, DBL_MAX);
    printf("long double size = %zu, min = %Le, max = %Le\n", sizeof(long double), LDBL_MIN, LDBL_MAX);

    return 0;
}


