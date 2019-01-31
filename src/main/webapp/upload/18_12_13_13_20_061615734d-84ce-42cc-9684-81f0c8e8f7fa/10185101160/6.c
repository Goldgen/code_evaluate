#include<stdio.h>
#include<string.h>
void rotate(int p[], int n, int m);
int main()
{
	int arr[11],len = 0,x = 0,i = 0;
	scanf("%d%d",&len,&x);
	for (i = 0;i < len;i ++)
		scanf("%d",&arr[i]);
	arr[len] = '\0';
	rotate(arr,len,x);	
	return 0;
}
void rotate(int p[], int n, int m)
{
	int j = 0,k = 0,h = 0;
	int q[11] ;
	for(j = 0;j <= n;j ++)
		q[j] = p[j];

	for(j = 0; j < n;j ++)
	{
		k = (j + m)	% n;
		p[k] = q[j];
	}
	
	printf("%d",p[0]);
	for(h = 1;h < n;h ++)
		printf(" %d",p[h]);
}
