#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter first number:");
    scanf("%d",&x);

    printf("Enter second number:");
    scanf("%d",&y);

    printf("The greater number between the two is:%d\n", (x>y)? x:y);

    return 0;
}