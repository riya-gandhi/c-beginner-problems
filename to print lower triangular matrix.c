#include<stdio.h>
#define size 4
int main()

{
    int arr1[size][size],i,j;

    for(i=0;i<size;i++)
        for(j=0;j<size;j++)
        scanf("%d",&arr1[i][j]);

    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
      {
        if(i+j<size-1)
            printf(" ");
        if(i+j>=size-1)
            printf("%d",arr1[i][j]);
      }
      printf("\n");
    }
    return 0;
}
