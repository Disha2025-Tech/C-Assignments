#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter the first number:");
    scanf("%d",&x);

    printf("Enter the second number:");
    scanf("%d",&y);

    printf("Smaller number between the two is:%d",(x<y)? x:y);

    return 0;
}