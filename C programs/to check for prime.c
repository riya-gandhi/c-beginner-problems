#include<stdio.h>
int main()
{
    int i,n,z;

    printf(" enter the number \n ");
    scanf("%d",&n);

    for(i=n-1;i>1;i--)
    {
        z=n%i;
        if (z==0)
        {printf("\n %d is not a prime number\n",n);
        break;}

    }
    if(z!=0) printf("\n%d is a prime number",n);
    return 0;
}
