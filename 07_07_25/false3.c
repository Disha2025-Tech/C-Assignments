#include <stdio.h>
int main()
{
    int x, y;
    
    printf("Enter the value of x:");
    scanf("%d",&x);

    printf("Enter the value of y:");
    scanf("%d",&y);

    if (x>=y)
    printf("x is greater than or equal to y");
else
    printf("x is less than y");

    return 0;
}