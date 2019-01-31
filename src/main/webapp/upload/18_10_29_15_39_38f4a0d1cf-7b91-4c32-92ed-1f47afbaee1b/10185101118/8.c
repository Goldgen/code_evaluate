#include<stdio.h>
#include<string.h>
int main()
{
    char d[100];
    memset(d,'*',sizeof(d));
    unsigned int n[100]={0},m,i=0;
    scanf("%s",d);
    for(int v=0;v<=99;v++)
        n[v]=d[v]-'0';
    scanf("%u",&m);
    for(int v=0;v<=99;v++)
        if(d[v]!='*')i++;
    i=i-1;
    if(i!=1)m%=i;
    else m=1;
    int a[i];
    for(int j=0;j<=i-1;j++)
        a[j]=n[j];
    if(m!=0)for(int v=0,j=i-m;v<=m-1;v++,j++)
        n[v]=n[j];
    for(int v=m,s=0;v<=i-1;v++,s++)
        n[v]=a[s];
    printf("%u ",i);
    if(m!=0)
        for(int v=0;v<=i-1;v++)
            printf("%u",n[v]);
    else
        for(int v=0;v<=i-1;v++)
            printf("%u",a[v]);
    return 0;
}