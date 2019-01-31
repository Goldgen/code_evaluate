#include<stdio.h>
#include<math.h>
int main()
{
    unsigned int x,p,n,i,y=0,b;
    scanf("%u%u%u",&x,&p,&n);
    for(i=p-n+1;i<=p;i++)
        y+=pow(2,i);
    b=x&y;
    b=b>>(p-n+1);
    printf("%u",b);
    return 0;
}