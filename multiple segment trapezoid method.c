#include<stdio.h>
float func(float n)
{
    return (n*n);
}
int main()
{
    int i;
    float sum=0,h,integral,x,a,b;

    printf("enter limits a,b for definite integration\n");
    scanf("%f %f",&a,&b);

    h=(b-a)/10;

    for(i=1;i<10;i++)
    {
        x=a+i*h;
        sum=sum+func(x);
    }
    integral=(0.5)*h*(func(a)+func(b)+2*sum);
    printf("\nintegral=  %f",integral);

    return 0;
}
