#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,v,k;
    scanf("%d",&n);
    getchar();
    for (int i=0; i<n; i++)
    {
        int s=0,c[100]={0};
        char a[100][201],*p[100];
        for (v=0; ; v++)
        {
            int t=1;
            for (k=0; ; k++)
            {
                a[v][k]=getchar();
                if (a[v][k]=='\n' || a[v][k]==' ') break;
                if (!isalpha(a[v][k])) t=0;
            }
            if (a[v][k]==' ') a[v][k]='\0';
            if (t) p[s++]=a[v];
            else c[v]=1;
            if (a[v][k]=='\n') break;
        }
        a[v][k]='\0';
        for (int m=0; m<s; m++)
            for (int h=0; h<s-m-1; h++)
            {
                if (strcmp(p[h],p[h+1])>0)
                {
                    int *y;
                    y=p[h];
                    p[h]=p[h+1];
                    p[h+1]=y;
                }
            }
        int g=0;
        printf("case #%d:\n",i);
        for (int x=0; x<v+1; x++)
        {
            if (c[x]) printf("%s",a[x]);
            else printf("%s",p[g++]);
            if(x!=v) printf(" ");
        }
        if (i!=n-1) printf("\n");
    }
    return 0;
}
