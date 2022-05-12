#include<stdio.h>
#include<string.h>

void reverse(char arr[])
{
    int i, count;

    count=strlen(arr);

    for(i=count;i>=0;i--)
        printf("%c",arr[i]);
}
    void main()
    {
        char arr1[20];
        int i;

        printf("enter the word, press space to finish the word\n");

        for(i=0;i<' ';i++)
            scanf("%c",&arr1[i]);

        reverse(arr1);
    }
