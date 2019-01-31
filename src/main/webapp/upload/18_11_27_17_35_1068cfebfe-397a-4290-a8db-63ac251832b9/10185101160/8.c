#include<stdio.h>
#include<string.h>
int main()
{
	int data[100];
	int n=0,i=0,j=0,times=1,max=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&data[i]);
	for(j = 1;j < n;j++)
		{
			if(data[j] == data[j-1])
			{
				times++;
				if( times > max)
					max = times;
			}	
			else
				times = 1;
		}
			printf("%d",max);
	return 0;
}
