#include <stdio.h>
#include <stdlib.h>
struct Book
{
    char name[100];
    double price;
    char press[40];
};

int main()
{
    struct Book example;
    struct Book *a;
    a=(struct Book*)malloc(sizeof(struct Book));
    gets(example.name);
    scanf("%lf\n",&(example.price));
    gets(example.press);
    a=&example;
    printf("name is \"%s\", ",example.name);
    printf("price is $%.2f, ",example.price);
    printf("press is \"%s\"",example.press);
    return 0;
}
