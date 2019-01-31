#include<stdio.h>
#include<math.h>
int main()
{
	float arr[5];
	long dol[5],cen[5];
	int i;
	for(i=0;i<=4;i++)
	{
		scanf("%f",&arr[i]);
		dol[i]=arr[i];
		cen[i]=100*arr[i]-100*dol[i];
		if(i==4)
		printf("$%d.%d",dol[i],cen[i]);
		else
		printf("$%d.%d ",dol[i],cen[i]);
	}
	return 0;


 } 