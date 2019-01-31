#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    getchar();
    char str[n][32];
    for(i=0;i<n;i++)
    {
        gets(str[i]);
    }
    char *p[n];
    for(int j=0;j<n;j++)
    {
        p[j]=str[j];
    }
    int k,m;
    char *s;
    for(k=0;k<n-1;k++)
    {
        for(m=k+1;m<n;m++)
        {
            if(strcmp(p[m],p[k])<0)
            {
                s=p[k];
                p[k]=p[m];
                p[m]=s;
            }
        }
    }
    int a;
    for(a=0;a<n;a++)
    {
        if(a==0)
            printf("%s",p[a]);
        else
            printf("\n%s",p[a]);
    }
}
