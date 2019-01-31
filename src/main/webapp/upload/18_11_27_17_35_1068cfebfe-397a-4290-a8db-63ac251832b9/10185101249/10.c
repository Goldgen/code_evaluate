#include <stdio.h>
int main()
{
    int i,j,k,t;
    scanf("%d",&i);
    int a[10]={0};
    for(j=0;j<i;j++)
        scanf("%d",&a[j]);
    for(j=0;j<i-1;j++)
    {
    	for(k=j+1;k<=i-1;k++)
    	{
    		if(a[j]>a[k])
    		{
    			t=a[j];
    			a[j]=a[k];
    			a[k]=t;
			}
		}
	}
	for(j=0;j<i;j++)
	{
		printf("%d",a[j]);
            if(j<i-1)
                printf(" ");
	}
    return 0;
}
