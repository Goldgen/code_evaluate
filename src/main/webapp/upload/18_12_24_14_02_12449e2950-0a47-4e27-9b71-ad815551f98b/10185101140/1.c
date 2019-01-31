#include <stdio.h>
#include <stdlib.h>

struct Book
{
    char name[95];
    double price;
    char pub[35];
};

int main()
{
    typedef struct Book book;
    book *ptr = malloc(sizeof(book));

    gets(ptr->name);
    scanf("%lf",&(ptr->price)); getchar();
    gets(ptr->pub);

    printf("name is \"%s\", price is $%.2lf, press is \"%s\"",
           ptr->name, ptr->price, ptr->pub);

    free(ptr);

    return 0;
}
