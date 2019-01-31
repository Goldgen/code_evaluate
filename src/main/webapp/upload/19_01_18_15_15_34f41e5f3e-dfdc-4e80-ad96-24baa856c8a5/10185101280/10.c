
#include <stdio.h>
int main()
{
int a,b,n,m,i;
scanf("%d",&n);
  m=1;
for (i=1;i<=n;i++)
    m=m*2;
   m--;
for (i=0;i<=m;i++)
{
printf("{");
b=i;
a=0;
while (b!=0)
{

if (b%2!=0){printf("%d",a);
if(b!=1&&b!=0)
   printf(",");}
       a++;
     b=b/2;
}
printf("}");
   if(i<m)
      printf("\n");

}return 0;
}
