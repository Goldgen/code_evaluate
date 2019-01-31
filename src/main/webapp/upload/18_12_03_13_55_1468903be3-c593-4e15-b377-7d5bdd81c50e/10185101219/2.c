#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    char a[n][31];
    for(int i=0;i<n;i++)
    {
        gets(a[i]);
    }
    char *p[n];
    char *flag=NULL;
    for(int i=0;i<n;i++)
    {
        p[i]=*(a+i);
    }
    for(int i=0;i<n-1;i++)
        for(int y=0;y<n-i-1;y++)
    {
        if(strcmp(p[y],p[y+1])>0)
        {
            flag=p[y];
            p[y]=p[y+1];
            p[y+1]=flag;
        }
    }
    for(int k=n-1;k>=0;k--)
    {
        printf("%s\n",p[k]);

    }
    return 0;
}