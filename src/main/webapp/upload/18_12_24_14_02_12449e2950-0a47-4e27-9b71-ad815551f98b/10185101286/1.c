#include<stdio.h>
#include<malloc.h>
#include<string.h>
struct book
    {
        char name[100];
        double price;
        char press[50];
    };
int main()
{
    struct book*p=(struct book*)malloc(sizeof(struct book));
    gets(p->name);
    scanf("%lf",&p->price);
    getchar();
    gets(p->press);
    printf("name is \"%s\", price is $%.2lf, press is \"%s\"",p->name,p->price,p->press);
    return 0;
}

