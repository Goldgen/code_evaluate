
#include <stdio.h>
int main()
{
double sum = 0;
int tmp = 0;
int i = 1;
for(i=1;i<=5;++i,scanf("%d",&tmp),sum += tmp);


printf("%0.1lf",sum/5 );
return 0;
}
