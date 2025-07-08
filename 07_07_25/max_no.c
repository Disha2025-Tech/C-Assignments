#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter first number a:");
    scanf("%d",&a);

    printf("Enter second number b:");
    scanf("%d",&b);

    printf("The greater number between a and b=%d",(a>b)? a:b);



    return 0;
}