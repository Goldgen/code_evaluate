#include <stdio.h>
#include <stdlib.h>
struct BOOK
{
        char name[100];
        double price;
        char press[100];
}st1,*p,*q;
int main()
{
  p=malloc(sizeof(struct BOOK));
  q=malloc(sizeof(struct BOOK));
  gets((*p).name);
  scanf("%lf\n",&st1.price);
  gets(&(*q).press);
  printf("name is \"%s\", price is $%.2lf, press is \"%s\"",(*p).name,st1.price,(*q).press);
  free(p);
  free(q);
}