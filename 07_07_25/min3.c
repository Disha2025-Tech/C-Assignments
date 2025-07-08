#include <stdio.h>
int main()
{
    int p,q;
    printf("Enter the first number:");
    scanf("%d",&p);

    printf("Enter the second number:");
    scanf("%d",&q);

    printf("Smaller number between the two is:%d",(p<q)? p:q);

    return 0;
}