#include <stdio.h>
int main() 
{
    int a, b, c;
    printf("Enter values for a and b: ");
    scanf("%d%d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("Current values of a and b is %d and %d", a, b);
    return 0;
}
