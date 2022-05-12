#include<stdio.h>

void sort(long int array[],long int n)
{
  long int c, d, swap;

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
long int algo2(long int a[],long int b[], long int n)
{
    long int sum=0,i;

    /*for(i=0;i<n;i++)
        printf("%d ",a[i]);

    for(i=0;i<n;i++)
        printf("%d ",b[i]);*/

    sort(a,n);sort(b,n);

    for(i=0;i<n;i++)
    {
        sum=sum+(a[i]*b[i]);
    }

    return (sum);
}
int main()
{
    long int n,a[1000],b[1000],max1,max2,sum=0,i;

    scanf("%ld",&n);

    for(i=0;i<n;i++)
        scanf("%ld",&a[i]);

    for(i=0;i<n;i++)
        scanf("%ld",&b[i]);

   sum=algo2(a,b,n);

    printf("%ld",sum);
    return 0;
}
