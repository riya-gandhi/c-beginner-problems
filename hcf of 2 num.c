#include<stdio.h>
int main()

{
    int x,y,z,hcf;
    scanf("%d %d",&x,&y);

    if(x>y) z=x;
    else z=y;

    for (hcf=z;hcf>=1;hcf--)
    {
        if(x%hcf==0 && y%hcf==0)
            break;
    }
    printf("\nHCF is %d",hcf);
    return 0;
}
