#include<stdio.h>
void sort(float , long int );
int main()
{
    float output=0,vperw[1000];
    long int i,j,W,n,arr[1000][2],maxindex;

    scanf("%ld %ld",&n,&W);

    for(i=0;i<n;i++)
        for(j=0;j<2;j++)
        scanf("%ld",&arr[i][j]);

    for(i=0;i<n;i++)
        vperw[i]=(float)arr[i][0]/(float)arr[i][1];

    sort(vperw,n);

    printf("%.4f",output);
    return 0;
}

#include <stdio.h>

void sort(float array[], long int n)
{
  long int c, d;
  float swap;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

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

