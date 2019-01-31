#include <stdio.h>
#include <stdlib.h>

struct Book{
        char name[91];
        double price;
        char publication[31];
};

int main()
{
    struct Book Book_1;
    gets(Book_1.name);
    scanf("%lf",&Book_1.price);
    getchar();
    gets(Book_1.publication);
    struct Book *pBook=(struct Book*)malloc(1*sizeof(struct Book));
    pBook=&Book_1;
    printf("name is \"%s\", price is $%.2lf, press is \"%s\"",
           pBook->name,pBook->price,pBook->publication);
    free(pBook);
    return 0;
}
