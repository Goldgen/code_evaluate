#include <stdio.h>
#include <string.h>

int main()
{
    struct Book
    {
        char name[90];
        double price;
        char pro[30];
    };
    struct Book *pbook=malloc(120*sizeof(char)+sizeof(int));
    gets(pbook->name);
    scanf("%lf",&pbook->price);
    getchar();
    gets(pbook->pro);
    printf("name is \"%s\", price is $%.2lf, press is \"%s\"",pbook->name,pbook->price,pbook->pro);
   return 0;
}
