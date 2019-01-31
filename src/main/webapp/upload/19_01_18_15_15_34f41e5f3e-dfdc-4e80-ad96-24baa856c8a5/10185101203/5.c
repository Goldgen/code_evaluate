#include <stdio.h>

int main()
{
int i,sum=0;
for(i=1;i<=100;i+=2)
sum+=i;

int j,Sum=0;
for(j=2;j<=100;j+=2)
Sum+=j;

printf("%d %d",sum,Sum);
}
