#include<stdio.h>
int reverse(int n)
{
    static int a[50],t=0;
    int m,b;
    while(n>0)
    {
        a[++t]=n;
        scanf("%d",&b);
        reverse(b);
        break;
    }
    if(n<0||n==0)
    {
        printf("%d",a[t]);
        for(m=t-1;m>=1;m--)
            printf(" %d",a[m]);
    }
}
int main()

{
    int x;
    scanf("%d",&x);
    reverse(x);
}