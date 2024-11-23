#include <stdio.h>
int main()
{
    float a, b;
    int d;
    printf("Enter value for a and b: ");
    scanf("%f%f", &a, &b);
    printf("The product as a floating point number is %f\n", a * b);
    d = a * b;
    printf("The product as an integer is %d\n", d);
    return 0;
}
