#include<stdio.h>
int main()
{
    int i,max,n;
    int arr[20];


    printf(" enter the size of array\n");
    scanf("%d",&n);

    printf(" \n enter the elements of the array \n");

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    max=arr[0];

    for(i=0;i<n;i++)
        if(max<arr[i]) max=arr[i];

    printf(" \n the largest number is %d",max);
    return 0;
}
