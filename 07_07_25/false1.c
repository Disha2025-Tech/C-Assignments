// Accept a number and display whether it is greater than 10

#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);

    if (x>10)
    printf("The number is greater than 10");
    else
    printf("The number is less than 10");


    return 0;
}