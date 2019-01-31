#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int n;
char a[20][100],b[20];

int min(int x,int y)
{
	if (x<y) return x;else return y;
}

int check(int x,int y)
{
	int i;
	for (i=1;i<=min(b[x],b[y]);i++)
		if (a[x][i]<a[y][i]) return 1;
		else if (a[x][i]>a[y][i]) return 0;
	if (b[x]<b[y]) return 1;
	return 0;
}

void swap(int x,int y)
{
	char t[100];int i;
	for (i=1;i<=b[x];i++)
		t[i]=a[x][i];
	for (i=1;i<=b[y];i++)
		a[x][i]=a[y][i];
	for (i=1;i<=b[x];i++)
		a[y][i]=t[i];
	int z=b[x];
	b[x]=b[y];b[y]=z;
}

int main()
{
	scanf("%d",&n);
	int i,j;
	char x=getchar();
	for (i=1;i<=n;i++)
	{

		x=getchar();int m=0;
		while(x!='\n') a[i][++m]=x,x=getchar();
		b[i]=m;
		//printf("%d\n",b[i]);
	}
	for (i=1;i<n;i++)
		for (j=i+1;j<=n;j++)
			if (check(i,j)) swap(i,j);
	for (i=1;i<=n;i++,puts(""))
		for (j=1;j<=b[i];j++)
			putchar(a[i][j]);
	return 0;
}
