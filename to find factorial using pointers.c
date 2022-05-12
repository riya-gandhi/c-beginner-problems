#include<stdio.h>
void factorial(int n, int * fact)
{
    int i;
    for(i=n;i>1;i--)
        (*fact)=(*fact)*i;
}
int main()
{
    int n,fact=1;
    printf("enter number : \n");
    scanf("%d",&n);

    factorial(n,&fact);

    printf("\nfactorial of %d = %d\n",n,fact);
    return 0;
}
