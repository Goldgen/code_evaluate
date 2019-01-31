#include<stdio.h>
#include<string.h>
int main()
{
	int data[100];
	int place[50] = {0};
	int n=0,a=0,i=0,j=0,k=0,times=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&data[i]);
	scanf("%d",&a);
	for(j=0;j<n;j++)
		{
			if(data[j] == a)	
				{
					place[times] = j;
					times ++ ;	 
				}	
		}
	if(times == 0)
		printf("ERROR");
	else
	{
		printf("%d",place[0]);
		for(k = 1; k < times;k++)
			printf(" %d",place[k]);
	}
	return 0;
}
