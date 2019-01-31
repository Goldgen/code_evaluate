#include<stdio.h>
int main()
{
    int n;
    int a;
    int b;
    int j=0;
    scanf("%d\r",&n);
    int shu_1[n];
    int shu_2[n-1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        shu_1[i]=a;
    }
    scanf("\r");
    scanf("%d",&b);
    while(j<n)
    {
        if(b==shu_1[j])
        break;
        if(b!=shu_1[j])
        j++;
    }
    if(j==n)
        printf("ERROR");
    if(j!=n)
    {
        for(int i=0;i<j;i++)
        shu_2[i]=shu_1[i];
        for(int i=j;i<n-1;i++)
        shu_2[i]=shu_1[i+1];
        for(int i=0;i<n-2;i++)
        printf("%d ",shu_2[i]);
        printf("%d",shu_2[n-2]);
    }
    return 0;
}
