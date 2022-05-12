#include<stdio.h>
int main()
{
    int i,flag=0;
    int arr1[4] = {1,2,3,4};
    int arr2[4] = {1,2,3,4};

    for(i=0;i<4;i++)
    {
        if (arr1[i]!=arr2[i]) {printf(" arrays not equal"); break ;}
        else flag++;
    }
    if( flag == 4) printf(" \n arrays equal ");
    return 0;
}
