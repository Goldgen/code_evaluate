#include <stdio.h>
#include <stdlib.h>

int main()
{int sum1=0,sum2=0,i;
for( i=1;i<=100;i=i+2)
sum1+=i;
printf("%d ",sum1);
for(i=2;i<=100;i=i+2)
sum2+=i;
printf("%d",sum2);
return 0;
}
