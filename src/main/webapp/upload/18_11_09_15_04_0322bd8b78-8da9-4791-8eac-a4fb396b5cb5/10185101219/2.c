#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
int x[n];
int p=1;
for(;p<=n;++p)
    x[p-1]=p;
    int i=1;
for(;i<=n;++i)
 if(i!=n)
 {
     int s=0;
    for(;s<2*(n-i);++s)
    printf(" ");
    int k=0;
    for(;k<i;++k)
        if(k!=0)
    printf("+%d",x[k]);
        else
    printf("%d",x[k]);
    printf("=");
    int m=i-1;
    for(;m>=0;--m)
        if(m!=0)
        printf("%d+",x[m]);
        else
        printf("%d\n",x[m]);
}
else
    {
     int s=0;
    for(;s<2*(n-i);++s)
    printf(" ");
    int k=0;
    for(;k<i;++k)
        if(k!=0)
    printf("+%d",x[k]);
        else
    printf("%d",x[k]);
    printf("=");
    int m=i-1;
    for(;m>=0;--m)
        if(m!=0)
        printf("%d+",x[m]);
        else
        printf("%d",x[m]);}
return 0;}
