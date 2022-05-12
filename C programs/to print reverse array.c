#include<stdio.h>
int main()
{
    int arr[20],i,n;

    printf(" enter the size of array ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf(" output \n");

    for (i=n-1;i>=0;i--)
        printf("%d \n",arr[i]);

    return 0;
}
