#include<stdio.h>
#define size 10
int main()
{
    int arr[size],sum=0,i;

    printf(" enter 10 numbers \n");

    for (i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("\n the sum is %d",sum);
    return 0;
}
