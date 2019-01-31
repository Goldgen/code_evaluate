#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char bookname[91];
    double price;
    char pressname[31];
}book;
int main()
{
    book a;
    book* pa=(book*)malloc(sizeof(book));
    pa=&a;
    gets(a.bookname);
    scanf("%lf",&a.price);
    getchar();
    gets(a.pressname);
    printf("name is \"%s\", price is $%.2lf, press is \"%s\"",pa->bookname,pa->price,pa->pressname);
}

