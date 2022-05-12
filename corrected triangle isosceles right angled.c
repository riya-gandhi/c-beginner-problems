#include <stdio.h>
void main()
{
int numofsides;
float a,b,c;
printf(" enter the number of sides \n");
scanf("%d",&numofsides);
if(numofsides==3)
{
    printf("\n the figure is a triangle \n");
    printf(" now input the length of the sides \n");
    scanf("%f %f %f",&a,&b,&c);
    if ((a<(b+c))||(b<(a+c))||(c<(a+b)))
    {
        if((a==b)||(b==c)||(c==a))
            printf("\n the triangle is isosceles \n");
        else
            printf(" the triangle is not isosceles \n");

        if((a*a==b*b+c*c)||(b*b==a*a+c*c)||(c*c==b*b+a*a))
            printf(" the triangle is right angled \n");
        else
            printf(" the triangle is not right angled \n");
    }
    else printf(" a triangle is not possible of the input lengths \n");
}
else
    printf(" the figure is not a triangle \n");


}
