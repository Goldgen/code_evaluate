#include <stdio.h>
#include <stdlib.h>
typedef struct Book Book;

struct Book
{
     char name[100];
     double price;
     char press[100];
};
int main()
{
    Book *pbook=(Book*)malloc(sizeof(Book));
    gets(pbook->name);
    scanf("%lf",&pbook->price);
    getchar();
    gets(pbook->press);
    printf("name is \"%s\", price is $%.2lf, press is \"%s\"",
		   pbook->name,pbook->price,pbook->press);
    free(pbook);
    return 0;
}
