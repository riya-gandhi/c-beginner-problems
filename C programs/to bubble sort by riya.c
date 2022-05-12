#include<stdio.h>

int main()
{
    int i,heavy=10,count=1,c=0;
    int arr[10]={10,9,8,7,6,5,4,3,2,1};

    while(count!=0)
    {
        count=0;

        for(i=0;i<heavy;i++)
        {
            if(arr[i]>arr[i+1])
            {
                c=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=c;
                count++;
            }
        }
        --heavy;
    }
    for(i=0;i<10;i++)
        printf("%d ",arr[i]);
    return 0;
}


