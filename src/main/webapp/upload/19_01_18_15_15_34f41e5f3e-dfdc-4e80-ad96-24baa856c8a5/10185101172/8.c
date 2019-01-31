#include <stdio.h>

int main()
{
 int n,bit,x,m,i,j=0;
 scanf("%d %d",&n,&m);
 x=n;
 for(bit=0;x>=1;bit++)
    x/=10;
 int original[bit],now[bit];
 i=n;
 for(j=0;j<bit;j++)
 {
     original[j]=i%10;
     i/=10;
 }
 for(j=0;j<bit;j++)
    now[j]=original[(j+m)%bit];
printf("%d ",bit);
for(i=bit-1;i>=0;i--)
    printf("%d",now[i]);
 return 0;
}
