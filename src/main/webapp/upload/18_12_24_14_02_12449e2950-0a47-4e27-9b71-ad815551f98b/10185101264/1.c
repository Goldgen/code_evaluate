#include <stdio.h>
struct library
{
    char * name;
    double price;
    char * press;
};

int main()
{
    struct library book;
    book.name = (char *)calloc(91, sizeof(char));
    book.press = (char *)calloc(1000001, sizeof(char));
    gets(book.name);
    scanf("%lf\n", &book.price);
    gets(book.press);
    printf("name is \"%s\", price is $%.2f, press is \"%s\"", book.name, book.price, book.press);
}