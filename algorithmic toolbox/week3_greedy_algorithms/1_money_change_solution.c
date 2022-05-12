#include<stdio.h>
int main()
{
    int count10=0,count5=0,count1=0,num;
    scanf("%d",&num);

    while(num>=10)
    {
        num=num-10;
        count10++;
    }
    while(num>=5)
    {
        num=num-5;
        count5++;
    }
    while(num!=0)
    {
        num--;
        count1++;
    }
    printf("%d",count10+count5+count1);
    return 0;
}
