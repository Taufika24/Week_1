#include <stdio.h>
int main() 
{
    float s1, s2, s3, s4, s5, p;
    printf("Enter 5 subject marks");
    scanf("%f%f%f%f%f", &s1, &s2, &s3, &s4, &s5);
    p = (s1 + s2 + s3 + s4 + s5) / 5;
    printf("The percentage is %f %%", p);
    return 0;
}
