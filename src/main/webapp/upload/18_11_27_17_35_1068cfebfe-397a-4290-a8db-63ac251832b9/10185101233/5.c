#include<stdio.h>
int main()
{
    int n;int a;int i=0;
    int b,c;
    scanf("%d\r",&n);
    int shu_1[n];
    int shu_2[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        shu_1[i]=a;
    }
    printf("\r");
    scanf("%d%d",&b,&c);
    for(int i=0;i<b;i++)
        shu_2[i]=shu_1[i];
    shu_2[b]=c;
    for(int i=b;i<=n+1;i++)
        shu_2[i+1]=shu_1[i];
    while(i<n)
    {
        printf("%d ",shu_2[i]);
        i++;
    }
        printf("%d",shu_2[i]);
    return 0;
}
