#include <stdio.h>
#include <stdlib.h>
int main()
{struct data
{char name[200];
double price;
char edi[200];}
typedef data;
data book;
data *spr;
spr=&book;
spr=(data*)malloc(3*sizeof(data));
gets(spr->name);
scanf("%lf",&spr->price);
getchar();
gets(spr->edi);
printf("name is \"%s\", price is $%.2f, press is \"%s\"",spr->name,spr->price,spr->edi);
free(spr);
return 0;}
