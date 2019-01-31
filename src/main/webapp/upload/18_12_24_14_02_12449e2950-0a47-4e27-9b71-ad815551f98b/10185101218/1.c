#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Book Book;

struct Book{
    char name[95];
    double price;
    char press[35];
};

int main(void)
{
    Book* ptr = malloc(sizeof(Book));
    gets((*ptr).name);
    scanf("%lf",&(*ptr).price);
    getchar();
    gets((*ptr).press);
    printf("name is \"%s\", price is $%.2f, press is \"%s\"",(*ptr).name,(*ptr).price,(*ptr).press);
    free(ptr);
    return 0;
}
