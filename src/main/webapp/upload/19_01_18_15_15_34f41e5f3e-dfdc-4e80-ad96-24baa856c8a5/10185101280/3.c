#include<stdio.h>
#include<math.h>
#include <stdlib.h>
#include<string.h>

#define N 2000000
char I[N];
int seive()
{
memset(I,1,sizeof(I));
  I[0]=I[1]=0;
int i,j,sq=(int)sqrt(N);
for (i=2;i<=N;i++)
if (I[i])
{
for (j=2*i;j<=N;j+=i)
I[j]=0;}
}
int main()
{
int a,b,c;
seive();
scanf("%d",&c);
printf("%d",c);
  for (a=2;a<=c/2;a++)
{
b=c-a;


if (I[a]&&I[b])
{
printf("=%d+%d",a,b);
}}
return 0;

}
