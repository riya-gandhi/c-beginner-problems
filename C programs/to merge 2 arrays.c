#include<stdio.h>
int main()
{
    int arr1[10],arr2[10],n,m,merge[20],i,a=0;

    printf(" enter the size of array 1 and array 2 \n");
    scanf(" %d %d",&n,&m);

    printf(" enter array 1 \n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
        merge[i]=arr1[i];
    }
    a=n+m;

    printf(" \n enter the array 2 \n");
    for(i=n;i<a;i++)
    {
        scanf("%d",&arr2[i]);
        merge[i]=arr2[i];
    }

    printf("\n merged array : \n");             /*printing the merged array*/
    for(i=0;i<a;i++)
        printf("%d \n",merge[i]);

    return 0;
}
