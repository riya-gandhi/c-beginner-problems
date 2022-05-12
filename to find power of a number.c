#include<stdio.h>
int main()

{
    int base=1,exponent=1;
    long int result;

    printf(" enter base \n");
    scanf("%d",&base);

    printf("\n enter exponent \n");
    scanf("%d",&exponent);

    if(exponent==0) result=1;
    else
    {   result=1;
        while(exponent!=0)

        {
            result=result*base;
            exponent--;
        }

    }



    printf("\n the result is %ld",result);
    return 0;
}
