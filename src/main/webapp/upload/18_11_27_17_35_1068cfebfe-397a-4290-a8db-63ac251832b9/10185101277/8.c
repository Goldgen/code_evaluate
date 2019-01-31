#include<stdio.h>

int main()
{
int n;
scanf("%d",&n);
int b[n];
int i, temp, Max=1;
scanf("%d",&b[0]);
for(i=1,temp=1; i<n; ++i)
{
scanf("%d",&b[i]);
if(b[i] == b[i-1])
{ temp ++; }
else
{ temp=1; }
if(temp>Max)
Max=temp;
}
printf("%d",Max);
return 0;
}