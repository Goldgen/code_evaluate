#include<stdio.h>
int main ()
{
	int i,j,k,h;
	scanf("%d",&h);
	h=h/2+1;
	for(i=0;i<h;i++)
	{
		for(j=0;j<h-i-1;j++)
			printf(" ");
		for(k=0;k<2*i+1;k++)
			if(k==0||k==2*i)
				printf("*");
			else{
				if(i==(h-1))
					printf("*");
				else
					printf(" ");
			}
		if(i!=h-1)
		printf("\n"); 
	} 
	return 0;
}
