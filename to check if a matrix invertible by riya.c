#include<stdio.h>
/*a matrix is not invertible if determinant is 0*/
int main()
{
    int a[3][3],i,j,d;

    printf("enter elements of the array\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        scanf("%d",&a[i][j]);

    d=a[0][0] * ((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1] * (a[1][0]* a[2][2] - a[2][0] * a[1][2]) + a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);

    if(d==0) printf("\n input matrix not invertible");
    else printf("\n it is invertible");

    return 0;
}
