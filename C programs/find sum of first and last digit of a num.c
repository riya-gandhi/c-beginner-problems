#include<stdio.h>
int main()
{
    int n,firstdgt,lastdgt,sum;

    printf("enter number \n");
    scanf("%d",&n);

    lastdgt=n%10;

    while(n>0)
    {
        n=n/10;
    }
    firstdgt=n;
    sum=firstdgt+lastdgt;

    printf("the sum is %d",sum);
    return 0;
}
