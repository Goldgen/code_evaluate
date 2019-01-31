#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct Book
    {
        char *name;
        double price;
        char *press;
    }*p;
    p=(struct Book*)malloc(sizeof(struct Book));
    p->name=(char*)malloc(100);
    p->press=(char*)malloc(100);
    gets(p->name);
    scanf(" %lf ",&p->price);
    gets(p->press);
    printf("name is \"%s\", price is $%.2lf, press is \"%s\"",p->name,p->price,p->press);
    free(p);
    free(p->name);
    free(p->press);
    return 0;
}
