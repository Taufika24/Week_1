#include <stdio.h>
int main()
{
    float p, t, r;
    printf("Enter principal amount, time period and rate of interest");
    scanf("%f%f%f", &p, &t, &r);
    printf("The simple interest is %f", (p*t*r)/100);
    return 0;
}
