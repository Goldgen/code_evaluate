#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    struct Book
    {
        char name[91];
        double price;
        char publish[31];
    };
    struct Book *p;
    p=malloc(sizeof(char)*100);
    gets(p->name);
    scanf("%lf",&p->price);
    getchar();
    gets(p->publish);
    printf("name is \"%s\", price is $%.2lf, press is \"%s\"",p->name,p->price,p->publish);
    return 0;
}


