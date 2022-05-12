#include<stdio.h>
#include<strings.h>
int main()

{
    int arr1[2][2], arr2[2][2], sum_arr[2][2] ,i,j;

    printf(" enter array 1 \n");

    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        scanf("%d",&arr1[i][j]);

    printf(" enter array 2 \n");

    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        scanf("%d",&arr2[i][j]);

    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        { sum_arr[i][j] = arr1[i][j] + arr2[i][j];
        }

    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        {
            printf("\n%d",sum_arr[i][j]);

        }


        return 0;
}
