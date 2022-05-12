#include<stdio.h>
void binary(int a);
void main()
{
    int num;

    printf("enter number\n");
    scanf("%d",&num);

    binary(num);

}
void binary(int a)
{
    int i=0,rem[20];

    for(i=0;i<20;i++)
        rem[i]=0;

    while(a!=0)
    {
        rem[i]=a%2;
        a=a/2;
        ++i;
    }


    for(i=19;i>=0;i--)
    printf("%d",rem[i]);

}
