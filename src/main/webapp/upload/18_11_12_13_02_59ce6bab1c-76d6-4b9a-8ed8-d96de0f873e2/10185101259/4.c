#include<stdio.h>
#include<math.h>
void shi(long num)
{long shi=0,i,j;
for(i=0;;i++)
{
j=num%10;
shi=shi+j*pow(8,i);
if(num/10==0)
{
printf("%d\n",shi);
break;
}
num=num/10;
}}
int main()
{
long  num;
scanf("%ld",&num);
shi(num);
return 0;
}
