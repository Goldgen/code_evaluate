#include<stdio.h>

int n,b[40];
char a[40][100];

int check(int x,int y)
{
    int i,z=b[x];
    if (b[y]<z) z=b[y];
    for (i=1;i<=z;i++)
        if (a[x][i]<a[y][i]) return 1;
        else if (a[x][i]>a[y][i]) return 0;
    if (b[x]<b[y]) return 1;else return 0;
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
    i=b[x],b[x]=b[y],b[y]=i;
}

int main()
{
    scanf("%d",&n);
    int i,j;char x=getchar();
    for (i=1;i<=n;i++)
    {
        int s=0;
        while((x=getchar())!='\n')
        {
            a[i][++s]=x;
        }
        b[i]=s;
    }
    for (i=1;i<n;i++)
        for (j=i+1;j<=n;j++)
            if (check(i,j)) swap(i,j);
    for (i=1;i<=n;i++,puts(""))
        for (j=1;j<=b[i];j++)
            putchar(a[i][j]);
    return 0;
}
