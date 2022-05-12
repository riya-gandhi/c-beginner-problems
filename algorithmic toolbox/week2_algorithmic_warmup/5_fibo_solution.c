#include<stdio.h>
void swap(unsigned long long *a,unsigned long long *b)
{
    unsigned long long *c;
    *c=*b;
    *b=*a;
    *a=*c;
}
int main()
{
    unsigned long long n,m,i,first=0,second=1,third=1,c;

    scanf("%llu llu",&n,&m);

    for(i=3;i<=n;i++)
    {
        third=first+second;
        swap(&first,&second);
        swap(&second,&third);
    }
    printf("%llu %llu",third,third%m);
}
