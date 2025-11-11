#include <stdio.h>
#include <math.h>


void inputSides(float *a, float *b, float *c) {
    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%f %f %f", a, b, c);
}


int isValidTriangle(float a, float b, float c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        printf(" Error: Side lengths must be positive values.\n");
        return 0;
    }
    if ((a + b > c) && (a + c > b) && (b + c > a))
        return 1;
    else
        return 0;
}


float calculateArea(float a, float b, float c) {
    float s = (a + b + c) / 2; // semi-perimeter
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}


void classifyTriangle(float a, float b, float c) {
    if (a == b && b == c)
        printf("🔹 Triangle Type: Equilateral\n");
    else if (a == b || b == c || a == c)
        printf(" Triangle Type: Isosceles\n");
    else
        printf(" Triangle Type: Scalene\n");
}


float calculatePerimeter(float a, float b, float c) {
    return a + b + c;
}


int main() {
    float a, b, c;

 
    inputSides(&a, &b, &c);

    
    if (isValidTriangle(a, b, c)) {
        printf(" The given sides form a valid triangle.\n");

       
        classifyTriangle(a, b, c);

       
        float area = calculateArea(a, b, c);
        printf("Area of the triangle: %.2f square units\n", area);

       
        float perimeter = calculatePerimeter(a, b, c);
        printf(" Perimeter of the triangle: %.2f units\n", perimeter);
    } 
    else {
        printf(" The given sides do not form a valid triangle.\n");
    }

    return 0;
}
