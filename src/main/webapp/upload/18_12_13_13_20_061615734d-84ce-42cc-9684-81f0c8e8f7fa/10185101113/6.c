#include <stdio.h>
void rotate(int* p, int n, int m)
{
    int num[n];
    for(int i=0;i<n-1;i++)
    {
        num[i]=*p;
        p++;
    }
    num[n-1]=*p;
    for(int i=0;i<m;i++)
    {
        int temp=num[n-1];
        for(int j=n-1;j>0;j--)
        {
            num[j]=num[j-1];
        }
        num[0]=temp;
    }
    for(int i=n-1;i>0;i--)
    {
        *p=num[i];
        p--;
    }
    *p=num[0];
    return;
}
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int num[n];
    int *pnum=num;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    rotate(pnum,n,m);
    for(int j=0;j<n;j++)
    {
        printf("%d",num[j]);
        if(j!=n-1)
            printf(" ");
    }
    return 0;
}
