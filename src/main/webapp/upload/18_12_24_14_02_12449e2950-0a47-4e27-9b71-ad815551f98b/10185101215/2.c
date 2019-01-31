#include <stdio.h>
#include <stdlib.h>
struct TBOOK
{
        char name[100];
        long long int xuehao;
        char youjian[100];
        long long telephone;
}std[100],*p=std,*q;
int main()
{
  p=malloc(sizeof(struct TBOOK));
  q=malloc(sizeof(struct TBOOK));
  while (scanf("%s")!=EOF)
  {
  gets((*p).name);
  scanf("%f\n",&st1.price);
  gets(&(*q).press);
  printf("name is \"%s\", price is $%.2f, press is \"%s\"",(*p).name,st1.price,(*q).press);
  free(p);
  free(q);
  }
}