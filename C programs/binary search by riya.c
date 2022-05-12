#include<stdio.h> /*when i wrote the code, i caused problem in line 5 and line 8 */
#define key 6
int main()
{
    int i,l=-1,r=10,mid;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};

    while(l+1!=r)
    {
        mid=(l+r)/2;

        if(key<=arr[mid])
            r=mid;
        else l=mid;
    }
    if(arr[r]==key) printf("\n%d is at location %d",key,r+1);
}
