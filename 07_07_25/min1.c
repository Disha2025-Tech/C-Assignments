#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the first number:");
    scanf("%d",&a);

    printf("Enter the second number:");
    scanf("%d",&b);

    printf("Smaller number between the two is:%d",(a<b)? a:b);

    return 0;
}