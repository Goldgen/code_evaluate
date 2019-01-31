#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct Book{
        char name[95];
        double price;
        char press[35];
    };
    struct Book *ptr=(struct Book*)malloc(sizeof(struct Book));
    gets(&ptr->name);
    scanf("%lf",&ptr->price);
    getchar();
    gets(&ptr->press);
    printf("name is \"%s\", price is $%.2lf, press is \"%s\"",ptr->name,ptr->price,ptr->press);
    free(ptr);
    return 0;
}
