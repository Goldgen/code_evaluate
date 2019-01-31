#include <stdio.h>
struct store
{
    char * n;
    double p;
    char * pr;
};

int main()
{
    struct store book;
    book.n = (char *)calloc(91, sizeof(char));
    book.pr = (char *)calloc(1000001, sizeof(char));
    gets(book.n);
    scanf("%lf\n", &book.p);
    gets(book.pr);
    printf("name is \"%s\", price is $%.2f, press is \"%s\"", book.n, book.p, book.pr);
}