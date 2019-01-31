#include<stdio.h>

void rotate(int* p, int n, int m)
{
    int i, j, k, t=0;
	for(j=0;j<m;j++)
    {
        t = p[n-1];
        for(k=n-1; k>=0; k--)
        {
            p[k] = p[k-1];
            if(k==0)
                p[k] = t;
        }
    }
    for(i=0;i<n;i++)
    {

        if(i==n-1)
            printf("%d",p[i]);
        else
            printf("%d ",p[i]);
    }
}

int main()
{
    int a[100];
    int i=0, n, m;
    scanf("%d%d", &n, &m);
    while(i<n)
    {
        scanf("%d", &a[i]);
        i++;
    }
    rotate(a, n, m);
}
