#include<stdio.h>
unsigned long long gcd(unsigned long long x,unsigned long long y)

{

    if((x==1)||(y==1))
    return 1;

    while((x!=y))
    {
        if(x>y) {x=x-y;}
        else y=y-x;
    }
    return (x);
}

int main()
{
    unsigned long long x,y,hcf;

    scanf("%llu %llu",&x,&y);

    hcf=gcd(x,y);

    x=x/hcf;y=y/hcf;

    printf("%llu",hcf*x*y);
}
