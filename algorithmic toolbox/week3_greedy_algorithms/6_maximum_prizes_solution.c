#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long  a,d,n,i,sum=0,arr[1000000];
    scanf("%lu",&a);

    d=(unsigned long)sqrt(1+8*a);

    n=(d-1)/2;

    printf("%lu\n",n);

    for(i=n;i>0;i--)
    {
        sum=sum+i;
        arr[i]=i;

    }

    if(sum!=a)arr[n]=arr[n]+(a-sum);

    for(i=n;i>0;i--)
        printf("%lu ",arr[i]);

    return 0;
}
