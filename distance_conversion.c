#include <stdio.h>
int main()
{
    float km;
    printf("Enter value in kilometres");
    scanf("%f",&km);
    printf("Value in metres is %f \n",km*1000);
    printf("Value in centimetres is %f \n",km*100000);
    printf("Value in millimetres is %f \n",km*1000000);
    return 0;
}
