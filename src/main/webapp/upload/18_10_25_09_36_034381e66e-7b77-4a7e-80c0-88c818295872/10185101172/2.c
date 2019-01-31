#include <stdio.h>
#include <stdlib.h>

int main()
{
int count=1;
int num=0;
double sum=0;
double average=0;
while(count<=5)
{
    scanf("%d",&num);
    sum+=num;
    count++;
}
average=sum/5.0;
printf("%.1lf",average);
return 0;
}