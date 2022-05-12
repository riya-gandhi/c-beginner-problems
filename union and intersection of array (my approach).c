#include<stdio.h>
int main()
{
    int i,A[100],B[100],AS[100],BS[100],m,n;

    scanf("%d %d",&m,&n);

    for(i=0;i<m;i++)
    {
        scanf("%d",&A[i]);

        if(i==0)
        {
            AS[i]=A[i];
            continue;
        }

        if(A[i]==A[i-1])
        {
            AS[i]= -20000;
            continue;
        }
        else
            AS[i]=A[i];
    }

    for(i=0;i<n;i++)
    {
        scanf("%d",&B[i]);

        if(i==0)
        {
            BS[i]=B[i];
            continue;
        }

        if(B[i]==B[i-1])
        {
            BS[i]= -20000;
            continue;
        }
        else
            BS[i]=B[i];
    }

   for(i=0;i<m;i++)
    {
        if(AS[i]==(-20000))
            continue;
        else
            printf("%d\n",AS[i]);
    }

    for(i=0;i<n;i++)
    {
        if(BS[i]==(-20000))
            continue;
        else
            printf("%d\n",BS[i]);
    }
    return 0;
}
