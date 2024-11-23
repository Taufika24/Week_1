#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter values for a and b");
    scanf("%d%d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("The current values of a and b are %d and %d", a, b);
    return 0;
}
