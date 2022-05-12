#include<stdio.h>
int main()
{
    int i,j,sum=0;
    int arr[5][6];

    for (i=0;i<5;i++)
    {
        for(j=0;j<6;j++)
        {
            scanf("%d",&arr[i][j]);
            sum=sum+arr[i][j];
        }
    printf("\n the sum of row %d is %d",i,sum);
    sum=0;
    }
    return 0;
}
