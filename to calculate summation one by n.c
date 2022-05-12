#include<stdio.h>
int main()
{
    int i,n;
    float sum=0;

    printf(" enter number\n");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
        sum=sum+((float)1/i);

    printf("\n the sum of 1 by n series is %f",sum);
    return 0;
}
