#include<stdio.h>
int main()
{
    int arr1[2][2], arr2[2][2],i,j;

    printf(" enter array 1 \n");

    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        scanf("%d",&arr1[i][j]);

    printf(" enter array 2 \n");

    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        scanf("%d",&arr2[i][j]);

    printf(" output is \n ");

    for(i=0;i<2;i++)
        {   for(j=0;j<2;j++)
            printf("%d",arr1[i][j]);

            for(j=0;j<2;j++)
            printf("%d",arr2[i][j]);

            printf("\n");
        }

    return 0;



}
