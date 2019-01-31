#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char a[n+1][31],*flag[n+1],*g;
    for (int i=0; i<n+1; i++)
    {
        fgets(a[i],31,stdin);
        flag[i]=a[i];
    }
    for (int i=1; i<n+1; i++)
        for (int v=1; v<n-i+1; v++)
        {
            if (strcmp(flag[v],flag[v+1])<0)
            {
                g=flag[v];
                flag[v]=flag[v+1];
                flag[v+1]=g;
            }
        }
    for (int j=1; j<n+1; j++)
        fputs(flag[j],stdout);
    return 0;
}
