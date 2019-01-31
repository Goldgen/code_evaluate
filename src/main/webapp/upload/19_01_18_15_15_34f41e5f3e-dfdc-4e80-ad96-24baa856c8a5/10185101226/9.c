#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[11]={0};
    int i,j,n;
    scanf("%d",&n);
    a[0]=1;
    for(i=0;i<=n;i++)
    {
        for(j=i;j>0;j--)a[j]+=a[j-1];
        for(j=0;j<=i;j++)printf("%4d",a[j]);
        printf("\n");
    }
    return 0;
}
