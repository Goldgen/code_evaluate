#include <stdio.h>

struct book
{
    char name[95];
    double price;
    char publish[35];
};

int main(void)
{
    struct book bk;
    //
    gets(bk.name);
    scanf("%lf",&bk.price);
    getchar();
    gets(bk.publish);
    //
    printf("name is \"%s\", ", bk.name);
    printf("price is $%.2f", bk.price);
    printf(", press is \"");
    printf("%s",bk.publish);
    printf("\"");

    return 0;
}
