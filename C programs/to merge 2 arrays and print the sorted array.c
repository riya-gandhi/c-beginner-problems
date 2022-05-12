#include<stdio.h>
int sort(int array[],int size);
int main()
{
    int i,arr1[10],arr2[10],merge[20];

    printf("enter first array\n");
    for(i=0;i<10;i++)
        scanf("%d",&arr1[i]);

    printf("\nenter the second array\n");
    for(i=0;i<10;i++)
        scanf("%d",&arr2[i]);

    for(i=0;i<10;i++)
    {
        merge[i]=arr1[i];
        merge[10+i]=arr2[i];
    }

    sort(merge,20);

    return 0;
}

int sort(int arr[],int size)
{
    int i,heavy=size,count=1,c=0;

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
    for(i=0;i<20;i++)
        printf("%d ",arr[i]);
    return 0;
}

