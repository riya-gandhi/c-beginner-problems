#include<stdio.h>
int main()

{
    int n,fact=1,i=1;

    printf(" enter n to calculate factorial \n");
    scanf("%d",&n);

    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("\n the factorial of %d is equal to %d",n,fact);

}
