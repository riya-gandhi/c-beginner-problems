#include<stdio.h>                       //trying to print a pyramid pattern of numbers
                                        // does not work yet ! need some modifications
int main()
{
    int row, i,j,k,a;

    scanf("%d",&row);
    printf("\n\n");

    for(i=0;i<row;i++)
    {
        for(j=i;j<row;j++)
            printf(" ");

        for(k=i+1;k<row;k++)
            printf("%d",k);

        for(a=k;a>i+1;a--)
            printf("%d",a);

        printf("\n");
    }
    return 0;
}
