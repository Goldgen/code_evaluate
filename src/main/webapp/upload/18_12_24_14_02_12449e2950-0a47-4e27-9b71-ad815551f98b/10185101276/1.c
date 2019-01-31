#include <stdio.h>
int get(char*a)
{
   char *pa = a;
    while(1==scanf("%c",pa)&&*pa!='\n')pa++;
    *pa = '\0';
    return pa-a;
}
int main()
{
    struct books
    {
        char name[91];
        double price;
        char press[31];
    };
    struct books one;
    get(one.name);
    scanf("%lf\n",&one.price);
    get(one.press);
    printf("name is \"%s\", price is $%.2lf, press is \"%s\"",one.name,one.price,one.press);

    return 0;
}

