#include <stdio.h>

int main()
{
	int num,j,k,flag=0,a[1000]={0};
	scanf("%d",&num);
	printf("{}");
	while(a[num]<1)
	{
		
		a[0]++;
		for(j=0;j<num;j++)
		{
			if(a[j]==2)
			{
				a[j]=0;
				a[j+1]++;
			}
		}
		if(a[num]>0)
			break;
		printf("\n{");
		for(k=0;k<num;k++)
		{				
			if(flag==0&&a[k]==1)
			{
				printf("%d",k);
				flag=1;
			}
			else if(flag==1&&a[k]==1)
				printf(",%d",k);
		}
		flag=0;
		printf("}"); 
	}
	return 0;
} 