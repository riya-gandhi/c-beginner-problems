#include<stdio.h>
int main()

{
    unsigned long long  x,y;
    scanf("%llu %llu",&x,&y);

    if((x==1)||(y==1))
    {
        printf("1");
        return 1;
    }

    while((x!=y))
    {
        if(x>y) {x=x-y;}
        else y=y-x;
    }
    printf("%llu",x);
    return 0;
}
