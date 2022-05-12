#include<stdio.h>
#define key 5
int main()
{
    int i,arr[10],count=0;

    printf("enter the data\n");
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<10;i++)
    {
        if(arr[i]==key)
        {
            count++;
            printf("\n%d is at the location %d.",key,i+1);
        }
    }

    printf("\n%d occurs %d times in the list.",key,count);

    return 0;
}
