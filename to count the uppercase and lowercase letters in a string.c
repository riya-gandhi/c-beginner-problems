#include<stdio.h>
#include<strings.h>
int main()

{
    char line[31];
    int i,n,uppercase=0,lowercase=0;

    printf("\n enter the sentence ");
    scanf("%[^\n]s",&line);

    n=strlen(line);

    for(i=0;i<n;i++)
       {
        if((line[i]>='a')&&(line[i]<='z'))
        lowercase++;

        if ((line[i]>='A')&&(line[i]<='Z'))
        uppercase++;

       }

       printf("\n uppercase letters: %d , lower case letters: %d",uppercase,lowercase);
       return 0;
}
