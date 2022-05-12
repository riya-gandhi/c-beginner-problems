#include<stdio.h>
int prime(int n)
{
    int i,z;

    for(i=n-1;i>1;i--)
    {
        z=n%i;
        if (z==0) return 0;

    }
    if(z!=0) return 1;
}
void main()
{
    int n,i;

    printf("prime numbers between 1-100 are\n");

    for(i=2;i<98;i++)
    {
        if(prime(i))
            printf("%d ",i);
    }
}
