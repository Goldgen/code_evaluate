#include <stdio.h>
#include <stdlib.h>

struct book
{
    char name[95];
    double price;
    char publish[35];
}aBook, *pbook;

int main()
{
    pbook = (struct book *)malloc(sizeof(struct book));
    gets(pbook->name);
    scanf("%lf\n", &pbook->price);
    gets(pbook->publish);
    printf("name is \"%s\", price is $%.2lf, press is \"%s\"",
           pbook->name, pbook->price, pbook->publish);
    free(pbook);
    return 0;
}
