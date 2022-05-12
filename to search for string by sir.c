#include<stdio.h>
#include<string.h>

int main()
{
    int i,found=0,n;
    char master[5][10]={"admin","riya","bob","tim","jim"},name[10];

    printf("enter username\n");
    gets(name);

    for(i=0;i<5;i++)
    {
        if(strcmp(name,master[i])==0)
        {
            found=1; break;
        }
    }
    if(found==1)
        printf("\nwelcome %s ",name);

    else printf("\nerror name not registered ");

    return 0;

}
