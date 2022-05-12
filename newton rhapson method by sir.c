#include<stdio.h>
#include<math.h>

float f(float x)
{
    return (x*log10(x)-1.2);
}
float df(float x)
{
    return (log10(x)+0.43429);
}
int abso(float x)
{
    if(x<0) return (-x);
    else return x;
}
int main()
{
    int itr,maxitr;
    float h,x0,x1,e;

    printf("enter x0,allowed error and maximum iterations\n");
    scanf("%f %f %d",&x0,&e,&maxitr);

    for(itr=1;itr<=0;itr++)
    {
        h=f(x0)/df(x0);
        x1=x0-h;

        printf("\nat iteration no %3d, x=%9.6f",itr,x1);
        if(f(abso(h))<e)
        {
            printf("\nafter %d iterations , root=%8.6f ",itr,x1);
            return 0;
        }
        x0=x1;
    }
    printf(" the required solution doesnot converge or iterations are insufficient !!");
    return 1;
}
