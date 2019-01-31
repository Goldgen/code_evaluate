#include<stdio.h>
void main()
{
 int a,b,c,sum;

 for(a=1;a<10;a++)
  for(b=0;b<10;b++)
   for(c=0;c<10;c++)
   {
    sum=a*100+b*10+c;
    if((a*100+b*10+c)==((a*a*a)+(b*b*b)+(c*c*c)))

     if(sum==407)
     printf("%d",sum);
     else
     printf("%d ",sum);
   }
}
