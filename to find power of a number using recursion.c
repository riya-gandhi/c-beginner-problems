#include<stdio.h>
int power(int base,int exponent)
{

    if(exponent==0) return(1);
    return(base*power(base,exponent-1));        //take note of this step.//
}

void main()
{
    int num,pow,result;

    printf(" enter base and exponent\n");
    scanf("%d %d",&num,&pow);

    result=power(num,pow);

    printf("\n%d^%d=%d",num,pow,result);

}
