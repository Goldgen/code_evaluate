#include<stdio.h>
#include<math.h>
int main()
{
	double arr[11][5],k=2.0;
	int i=0,j=0;
	for(i=0;i<=10;i++)
	{
		j = 0;
		arr[i][0]=k;
		arr[i][1]=1.0/k;arr[i][2]=pow(k,2);arr[i][3]=pow(k,3);arr[i][4]=pow(k,4);
		for(;j<=4;j++)
		{
			printf("%.4lf",arr[i][j]);
			if(i!=10&&j==4)
			printf("\n");
			if(j<4)
			printf(" ");
		}
		k+=0.1;
		
		
	}
return 0;

 } 