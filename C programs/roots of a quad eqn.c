#include<stdio.h>
#include<math.h >

int main()

{
    float a=0,b=0,c=0;
    float disc,d,x;

    printf(" Enter the coefficients in sequence \n");
    scanf("%f %f %f",&a,&b,&c);

    d=(b*b)-(4*a*c);
    disc= sqrt(d);

    if(disc>=0)
    {
        if (disc==0) printf("\n the roots of the equation are %f and %f \n", (-b)/(2*a), (-b)/(2*a));
        else printf("\n the roots are %f and %f \n ",(-b+disc)/(2*a),(-b-disc)/(2*a));
    }
    else printf("\n the roots are complex \n" );
    return 0;
}
