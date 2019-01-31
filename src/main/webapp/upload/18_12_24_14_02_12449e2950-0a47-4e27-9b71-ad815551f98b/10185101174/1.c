#include <stdio.h>
#include <stdlib.h>


struct Book{
    char name[91];
    double price;
    char press[31];
};
int main()
{
    struct Book ray;
    gets(ray.name);
    scanf("%lf",&ray.price);
    getchar();
    gets(ray.press);
    printf("name is \"%s\", price is $%.2f, press is \"%s\"",ray.name,ray.price,ray.press);
}
