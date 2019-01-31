#include<stdio.h>
int main()
{
	int i,v,r,c;
	scanf ("%d %d",&r,&c);
	int a[r][c];
	for (i=0;i<r;i++){
		for (v=0;v<c;v++){
			scanf ("%d",&a[i][v]);
		}
	}
	printf ("%d",a[0][0]);
	for (i=0;i<c;i++){
		if(i>0)
		    printf ("\n%d",a[0][i]);
		for (v=1;v<r;v++){
			printf (" %d",a[v][i]);
		}
	}
}