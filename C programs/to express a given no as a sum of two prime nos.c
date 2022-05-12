#include<stdio.h>
int ifprime(int num)
{
    int i,z;

    for(i=num-1;i>1;i--)        /*i am checking for all the numbers less than input if divisible.we also know if
                                    a number not divisible by all the numbers till its half then also prime*/
    {
        z=num%i;
        if (z==0)
        return(0);

    }
    if(z!=0)
    return(1);
}

void main()
{
    int number,j,count=0;

    printf("enter the number\n");
    scanf("%d",&number);

    for(j=1;j<=number/2;j++)
    {
        if(ifprime(j)&&ifprime(number-j))
            printf("\n%d=%d+%d",number,j,number-j);
        else { count++; continue;}
    }
    if(count==(number/2)) printf("\n %d cannot be expressed as a sum of prime numbers",number);
}
