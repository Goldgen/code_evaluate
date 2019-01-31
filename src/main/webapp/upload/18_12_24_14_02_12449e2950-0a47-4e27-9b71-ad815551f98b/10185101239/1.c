#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
int main()
{
  struct
  {  char name[10000];
     double price;
     char press[10000];
  }Book;
  gets(Book.name);
  scanf("%lf",&Book.price);
	getchar();
  gets(Book.press);
  printf("name is \"%s\", price is $%.2lf, press is \"%s\"",Book.name,Book.price,Book.press);

    return 0;
}