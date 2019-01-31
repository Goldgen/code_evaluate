#include <stdio.h>
int main()
{
	int t,i,a,arr[40],brr[40];
    scanf("%d",&t);
	{
	   for(i=1,arr[0]=1;i<=t;i++)
	   {
	        for(a=0;a<i;a++)
	        {
		        brr[a]=arr[a]+arr[a-1];
	            printf("%d",brr[a]);
	            if(a!=i-1)
	            printf(" ");
	        }
	        for(a=0;a<i;a++)
	        {
	            arr[a]=brr[a];
            } 
	        if(i!=t)
			printf("\n");
	        arr[a]=0;
	   }
    }
    return 0;
}
