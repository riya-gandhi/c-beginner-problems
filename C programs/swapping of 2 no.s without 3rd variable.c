#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,b=0;

    printf ("input a and b ");
    scanf("%d %d",&a,&b);


    a=a*b; b=a/b; a=a/b;

    printf(" the values after swapping a= %d, b=%d",a,b);
    return 0;
}

