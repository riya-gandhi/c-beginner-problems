#include<stdio.h>
int main()
{
    int arr[45],i,n;
    scanf("%d",&n);

    arr[0]=0;
    arr[1]=1;

    for(i=2;i<=n;i++)
        arr[i]=arr[i-1]+arr[i-2];

    printf("%d",arr[n]);
}
