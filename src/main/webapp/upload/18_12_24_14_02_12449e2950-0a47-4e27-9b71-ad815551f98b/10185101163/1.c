#include <stdio.h>
#include <stdlib.h>
struct Book{
    char name[91];
    float price;
    char press[31];
};
int main()
{
    struct Book A;
    char* name;
    name=A.name;
    char* press;
    press=A.press;
    gets(name);
    scanf("%f",&A.price);
    getchar();
    gets(press);
    printf("name is \"%s\", price is $%.2f, press is \"%s\"",name,A.price,press);
    return 0;
}
