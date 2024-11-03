#include <stdio.h>
int main(){
    int a,b;
    printf("Enter 2 integers");
    scanf("%d%d",&a,&b);
    printf("The sum of the two integers is %d \n",a+b);
    printf("The difference of the two integers is %d \n",a-b);
    printf("The product of the two integers is %d \n",a*b);
    printf("The ratio of the two integers is %d \n",a/b);
    printf("The remainder when a is divided by b is %d \n",a%b);
    return 0;
}
