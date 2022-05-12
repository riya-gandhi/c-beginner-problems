#include<stdio.h>
struct record
{
    char name[10];
    int rollno;
    float score;
}a[5],t;

int main()
{
    int count=1,i,j,heavy;
    for(i=0;i<5;i++)
    {
        printf("\nenter roll no.\n");
        scanf("%d",&a[i].rollno);

        printf("\nenter name\n");
        scanf("%s",a[i].name);

        printf("\nenter score:\n");
        scanf("%f",&a[i].score);
    }

    while(count!=0)
    {
     count=0;
     for(i=0;i<heavy;i++)
     {
         if(a[i].score>a[i+1].score)
         {
             t=a[i+1];
             a[i+1]=a[i];
             a[i]=t;
             count++;

         }
     }
     heavy--;

    }

    printf("\nMERIT LIST : \n");

    for(i=4;i>=0;i--)
    {
        printf("\n (%d) %s %f\n",a[i].rollno,a[i].name,a[i].score);
    }
    return 0;
}
