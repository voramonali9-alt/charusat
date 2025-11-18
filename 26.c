//monali vora 25ce140
#include <stdio.h>
#include <math.h>
void inputsides(float *a, float *b, float *c) {
    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%f %f %f", a, b, c);
}
int isValidtriangle(float a, float b, float c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        printf(" Error: Side lengths must be positive values.\n");
        return 0;
    }
    if ((a + b > c) && (a + c > b) && (b + c > a))
        return 1;
    else
        return 0;
}
float calculatearea(float a, float b, float c) {
    float s = (a + b + c) / 2; 
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}
void classifytriangle(float a, float b, float c) {
    if (a == b && b == c)
        printf(" equilateral\n");
    else if (a == b || b == c || a == c)
        printf("  isosceles\n");
    else
        printf(" scalene\n");
}
float calculateperimeter(float a, float b, float c) {
    return a + b + c;
}


int main() {
    float a, b, c;
 inputsides(&a, &b, &c);
 if (isValidtriangle(a, b, c)) {
        printf("  valid triangle.\n");
classifytriangle(a, b, c);
float area = calculatearea(a, b, c);
        printf("Area: %.2f square units\n", area);
  float perimeter = calculateperimeter(a, b, c);
        printf(" Perimeter: %.2f units\n", perimeter); } 
    else {
        printf(" The given sides do not form a valid triangle.\n");
    }  return 0;
}
