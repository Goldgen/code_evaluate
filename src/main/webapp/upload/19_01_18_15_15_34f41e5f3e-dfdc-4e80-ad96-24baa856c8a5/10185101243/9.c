#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,i,j;//i是行数，j是列数
int a[40][40];
scanf("%d",&n);

        for (i=0;i<=n;i++){
        for(j=0;j<=i;j++){

        if(j==i||j==0)
            a[i][j]=1;
        else
        a[i][j]=a[i-1][j-1]+a[i-1][j];

        }
        }
	for(i=0;i<n;i++)

		for(j=0;j<=i;j++)

		{

			if(j<i) printf("%d ",a[i][j]);

			else printf("%d",a[i][j]);

			if(i<n-1&&j==i) printf("\n");

		}

    return 0;
}
