#include<stdio.h>
int main()
{
    int num[5],i;

    printf(" enter five numbers \n");

    for (i=0;i<5;i++) scanf("%d",&num[i]);

    for (i=0;i<5;i++) printf("\n number[%d] is %d",i,num[i]);

    return 0;
}
