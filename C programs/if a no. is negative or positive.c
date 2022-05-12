#include <stdio.h>
#define PI 3.14
void main()
{
    float a;

    printf("enter number \n");
    scanf("%f",&a);

    if (a>=0)
    {   if (a>0) printf("positive number \n");
        else printf("the number is 0 \n");

    }

    else printf("negative number \n");

}
