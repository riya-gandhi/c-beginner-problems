#include<stdio.h>
#include<math.h>

int func(int x)
{
    return(asin(x));
}

int main()
{
    int i,j,y=0;

    for(i=-100;i<100;i++)
    {
        y=func(i); printf("%d",y);

       // for(j=-10;j<y;j++)
         //   printf(" ");

        printf("*\n");
    }
    return 0;
}
