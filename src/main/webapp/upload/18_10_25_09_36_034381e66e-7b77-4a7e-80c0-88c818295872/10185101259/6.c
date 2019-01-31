#include<stdio.h>
int main(void)
{  int a,b,n;
scanf("%d",&n);
printf("*\n**");
for(int a=1;a<=n-3;a++)
{printf("\n*");
for(int b=1;b<=a;b++)
printf(" ");
printf("*");}
printf("\n");
for(int a=1;a<=n;a++)
printf("*");
return 0;
}
