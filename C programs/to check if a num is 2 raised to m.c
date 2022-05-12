#include<stdio.h>
int main()
{
   long int n,i;

    printf("\n enter number\n");
    scanf("%d",&n);

    while(n!=1)
    {
        if(n%2==0) n=n/2;
        else { printf("\n the input number is not of form 2^m\n"); break;}

    }
    if(n==1)
        printf("\n the input number is of the form 2^m ");
    return 0;
}
