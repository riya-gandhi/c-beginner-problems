#include<stdio.h>
#include<stdlib.h>
long long int bubblesort(long long int array[],long long int n)
{
    long long int c,d,swap;
    for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
}
long long int maxproductsort(long long int a)
{
    long long int i,arr[200000];
    for(i=0;i<a;i++)
        scanf("lld",&arr[i]);

    bubblesort(arr,a);
    return (arr[0]*arr[1]);
}
long long int maxproductselect(long long int a)
{
    long long int arr[200000],max1=0,max2=0,i,j;

    for(i=0;i<a;i++)
        scanf("%lld",&arr[i]);

    for(i=0;i<a;i++)
    {
        if(arr[i]>max1)
            {
                max1=arr[i];
                j=i;
            }

    }
    for(i=0;i<a;i++)
        if((i!=j)&&(arr[i]>max2))
        max2=arr[i];

    return(max1*max2);
}
int main()
{
    long long int n,a,b,maxpro;

    while(1)
    {
        n=rand()%100+1;
        a=maxproductselect(n);
        b=maxproductsort(n);

        if(a!=b) {printf("%lld %lld",a,b);break;}
        else printf("ok");

    }
    scanf("%lld",&n);

    maxpro=maxproductselect(n);
    printf("%lld",maxpro);

    return 0;


}
