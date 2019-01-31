#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct Book
    {
        char name[100];
        double price;
        char press[100];
    };
    struct Book *ab;
    ab = malloc(sizeof(struct Book));
    gets(ab->name);
    scanf("%lf",&ab->price);
    getchar();
    gets(ab->press);
    printf("name is \"%s\", price is $%.2lf, press is \"%s\"",ab->name,ab->price,ab->press);
    return 0;
}
