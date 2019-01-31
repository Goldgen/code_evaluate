#include <stdio.h>
#include <string.h>
#include<ctype.h>
#define SIZE 10

void rotate(int* p, int n, int m)
{
    int *t=(int*)malloc(sizeof(int)*m);
	int i;
	memcpy(t,p+n-m,sizeof(int)*m);
	for (i=n-m-1;i>=0;i--)
	{
		p[i+m]=p[i];
	}
	memcpy(p,t,sizeof(int)*m);
	free(t);
}
int main()
{
    int n,m,i;
    scanf("%d %d",&n,&m);
    int p[n+1];
    for(i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
    rotate(p,n,m);
    for(i=0;i<n-1;i++){
        printf("%d ",p[i]);
    }
	printf("%d",p[i]);
    return 0;
}
