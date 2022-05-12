#include<stdio.h>
#include<math.h>

float func(float x)
{
    return(x*x*x-4*x-9);
}

void bisection(float *x,float a,float b, int *itr)
{
 *x=(a+b)/2;
 ++(*itr);
 printf("iteration number %.3d \t x= %7.5f \n",*itr,*x);
}

int abso(int x)
{
    if(x<0) return (-x);
    else return (x);
}

int main()
{
    int itr=0, maxitr;
    float x,a,b,error,x1=0;

    printf("enter the boundary values,error and max iterations:\n ");
    scanf("%f %f %f %d",&a,&b,&error,&maxitr);

    bisection(&x,a,b,&itr);

    do
    {
        if(func(a)*func(x)<0)
            b=x;
        else a=x;

        bisection(&x1,a,b,&itr);

        if(func(abso(x1-x))<error)
        {
            printf("\n after %d iterations, root = %6.4f\n",itr,x1);
            return 0;
        }
        x=x1;
    }
    while(itr<maxitr);

    printf("\nthe solution does not converge ");
    return 0;
}
