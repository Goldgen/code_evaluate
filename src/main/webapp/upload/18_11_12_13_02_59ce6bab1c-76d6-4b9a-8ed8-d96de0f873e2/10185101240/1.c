#include<stdio.h>
int cfb(int n)
{
 int x,y,z;
 printf(" 1 * 1 =  1");
 for(x=2;x<=n;x++)
 {
     printf("\n");
  for(y=1;y<=x;y++)
{
   z=x*y;
   if(z<10)
   printf(" %d * %d =  %d",y,x,z);
   else
printf(" %d * %d = %d",y,x,z);
  }
 }
 return ;
}
int main()
{
    int a;
    scanf("%d",&a);
    cfb(a);
    return 0;
}