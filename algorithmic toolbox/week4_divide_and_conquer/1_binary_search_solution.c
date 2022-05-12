#include<stdio.h>

int main()
{
    long int i,l,mid,r;
    long int arr[300000],key[100000],n,m,currentkey;

    scanf("%ld",&n);
    for(i=0;i<n;i++)
        scanf("%ld",&arr[i]);

    scanf("\n%ld",&m);
    for(i=0;i<m;i++)
        scanf("%ld",&key[i]);

    for(i=0;i<m;i++)
    {
        currentkey=key[i]; l=-1; r=n-1;         //updating of variables
        while(l+1!=r)
        {
            mid=(l+r)/2;

            if(currentkey<=arr[mid])
            r=mid;
            else l=mid;
        }
    if(arr[r]==currentkey) printf("%d ",r);
    else printf("%d ",-1);

    }
}
