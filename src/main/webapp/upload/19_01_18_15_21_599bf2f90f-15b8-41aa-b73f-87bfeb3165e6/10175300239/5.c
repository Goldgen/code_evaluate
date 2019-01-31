#include <stdio.h>

int main()
{
    int sum=0;
    int a,b,c=0;
    scanf("%d %d %d",&a,&b,&c);
    sum=sum+a+b+c;
    scanf("%d %d %d",&a,&b,&c);
    sum=sum+a+b+c;
    scanf("%d %d",&a,&b);
    sum=sum+a+b;
    printf("%d\n",sum);
    sum=0;
    scanf("%d,%d,%d",&a,&b,&c);
    sum=sum+a+b+c;
    scanf("%d,%d,%d",&a,&b,&c);
    sum=sum+a+b+c;
    scanf("%d,%d",&a,&b);
    sum=sum+a+b;
    printf("%d",sum);
    return 0;
}