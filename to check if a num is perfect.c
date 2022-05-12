#include<stdio.h>
int main()
{
    /* a perfect number is a number equal to the sum of its proper divisors */

    int n,i,z,sum=0;

    printf("\n enter the number\n");
    scanf("%d",&n);

    for (i=n-1;i>=1;i--)
    {
        z=n%i;
        if(z==0) sum=sum+i;
    }
    if(sum==n) printf("\n %d is a perfect number\n",n);
    else printf("\n %d is not a perfect number\n",n);

    return 0;
}
