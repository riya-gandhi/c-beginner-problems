#include<stdio.h>

int hcf(int x,int y)
{
    while(x!=y)
    {
        if(x>y) return(hcf(x-y,y));     //logic copied by sir. basically we are making 2 nos equal by repeated subtraction.//
        else return(hcf(x,y-x));
    }
    return x;
}
int main()
{
    int a,b,c,d,result;

    printf("enter four numbers\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    result=hcf(hcf(a,b),hcf(c,d));

    printf("\nthe highest common divisor is %d",result);
    return 0;
}
