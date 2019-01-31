#include<stdio.h>
#define SIZE 100
main(){

	int a[SIZE][SIZE];
    int i,j,n;


	scanf("%d",&n);
	if(n>=2&&n<=10){
	for (i = 1;i <= n;i++)
	{
		for(j = 1;j <= i;j++)
		{
			if(i == j)
				a[i][j] = 1;
			else if(j == 1)
				a[i][j] = 1;
			else
				a[i][j] = a[i-1][j-1] + a[i-1][j];

                    if(j<i)
			printf("%d ",a[i][j]);
			else {if(i==n&&j==n)
                printf("%d",a[i][j]);
                   else printf("%d\n",a[i][j]);

			}
		}

	}}

 return 0;
}