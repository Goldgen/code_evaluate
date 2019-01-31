#include <stdio.h>
int main()
{
int j=0,k;
scanf("%d",&k)
;while(k>=1)
{

if(k&1==1)
j++;k=k/2;
}
printf("%d",j);
}