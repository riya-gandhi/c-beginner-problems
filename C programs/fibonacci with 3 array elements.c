#include<stdio.h>
void swap(int *,int *);
int main()
{
    int arr[3]={0,1,1};
    long int n,i;

   // print f("enter n");
    scanf("%ld",&n);

    for(i=0;i<=n;i++)
    {
        arr[2]=(arr[1]+arr[0])%10;
        //print f("%d",arr[2]);
        swap(&arr[0],&arr[1]);
        swap(&arr[1],&arr[2]);
    }
    //print f("%d",arr[2]);
    //last digit=arr[2]%10;
    printf("%d",arr[2]);
    return 0;
}
void swap(int*a,int*b )
{
    int temp;
    temp=(*a);
    *a=(*b);
    *b=temp;
}
