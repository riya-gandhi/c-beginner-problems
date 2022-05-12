#include<stdio.h>
int main()

{
    int arr1[2][3],arr2[2][3],result[2][3],i,j;

    for(i=0;i<2;i++)
        for(j=0;j<3;j++)
        scanf("%d",&arr1[i][j]);

    printf("\n");

    for(i=0;i<2;i++)
        for(j=0;j<3;j++)
        scanf("%d",&arr2[i][j]);

    printf("\n");

    for(i=0;i<2;i++)
        for(j=0;j<3;j++)
        result[i][j]=arr1[i][j]-arr2[i][j];

    for(i=0;i<2;i++)
        {
            for(j=0;j<3;j++)
            printf("%d",result[i][j]);

            printf("\n");

        }
        return 0;

}
