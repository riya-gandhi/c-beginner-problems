#include<stdio.h>
#define size 9
int main()
{
    int c=0,i;
    int arr[size]={2,4,6,8,10,12,14,16,18};

    for(i=0;i<=size/2;i++)
    {
        c=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=c;
    }
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);

    return 0;
}
