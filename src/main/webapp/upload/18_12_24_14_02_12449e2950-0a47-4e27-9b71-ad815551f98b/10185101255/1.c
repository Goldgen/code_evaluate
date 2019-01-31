#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[95];
    double price;
    char press[35];
} Book;

int main ()
{
    Book *pBook;
    
    pBook = (Book*) malloc(sizeof(Book));
    
    gets(pBook->name);
    scanf("%lf\n", &pBook->price);
    gets(pBook->press);
    
    printf("name is \"%s\", price is $%.2lf, press is \"%s\"",pBook->name, pBook->price, pBook->press);
  

    return 0;
}
