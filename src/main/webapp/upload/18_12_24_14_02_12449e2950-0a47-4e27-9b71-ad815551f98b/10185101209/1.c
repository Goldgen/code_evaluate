#include<stdio.h>

struct Book
{
    char name[1000];
    double price;
    char press[1000];
}Mybook;

int main()
{
    gets(Mybook.name);
    scanf("%lf",&Mybook.price);
    getchar();
    gets(Mybook.press);
    printf("name is \"%s\", price is $%.2lf, press is \"%s\"",
		   Mybook.name, Mybook.price, Mybook.press);
    return 0;
}