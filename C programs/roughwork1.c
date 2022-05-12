#include <stdio.h>

int main(void)
{
	int t,arr[10],i,n,temp=0;

	scanf("%d",&t);

	while(t--)
	{
	    temp=0;

	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	        scanf("%d",&arr[i]);

        if(arr[0]<0)
        {
            printf("NO\n");
            continue;
        }

	   for(i=1;i<n;i++)
	   {
	       if(arr[i]<0)
	       {
	           temp++;
	           break;
	       }


	       if(arr[i]%i==0)
	        continue;

	        else
	        {
	            temp++;
	            break;
	        }
	   }

	   if(temp==0)
	    printf("YES\n");

	   else printf("NO\n");
	}

	return 0;
}

