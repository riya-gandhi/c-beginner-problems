#include<stdio.h>
int main()
{
    int n,i=0,z;

    printf(" enter number\n");
    scanf("%d",&n);
    z=n;

    while(z>0)
    {
        z=z/10;
        i++;

    }
    printf("\n %d has %d digit(s)\n",n,i);
    return 0;

}
