#include<stdio.h>
int main()
{
    unsigned long long int arr[184467400],i,n,lastdigit;
    scanf("%llu",&n);

    arr[0]=0;
    arr[1]=1;

    for(i=2;i<=n;i++)
        arr[i]=arr[i-1]+arr[i-2];

    lastdigit=arr[n]%10;
    printf("%llu",lastdigit);
}
