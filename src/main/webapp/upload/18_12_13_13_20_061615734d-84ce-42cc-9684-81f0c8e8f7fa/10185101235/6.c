#include<stdio.h>
#include<string.h>
void rotate(int* p, int n, int m);

int main(void)
{
    int p[10];
    int n = 0;
    int m = 0;
    int i = 0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    rotate(p,n,m);
    for(i=0;i<n;i++)
    {
        printf("%d",p[i]);
        if(i!=n-1)
            printf(" ");
    }
}

void rotate(int* p, int n, int m)
{
    int q[10];
    int i = 0;
    for(i=0;i<n;i++)
    {
        q[i] = p[i];
    }
    m = m%n;
    for(i=0;i<n;i++)
    {
        if(i-m>=0)
            p[i] = q[i-m];
        else
            p[i] = q[i-m+n];
    }
}
