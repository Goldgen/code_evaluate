#include<stdio.h>
#include<math.h>
   float num(int n)
{
   float An=2.00;float Bn=1.00;
   float temp;
  while(--n)
  {
   temp=Bn;
   Bn=An;
   An=An+temp;
  }
   return(An/Bn);
}
void main()
{
int n=50;
float sum=0.0;
for(;n>0;n--)
{
	sum=sum+num(n);
}
printf("%.2f",sum);
} 