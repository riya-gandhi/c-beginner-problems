#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    int i,n,max=0;

    scanf("%d",&n);
    p= (int *)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
        if(p[i]>max)
            max=p[i];
    }

    printf("\nmax element is %d\n",max);
    return 0;
}
