#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct book book;
struct book{
	char name[100];
	double price;
	char press[40];
};

int main(){
	book *pbook;
    pbook=(book*)malloc(sizeof(book));
    gets(pbook->name);
    scanf("%lf",&pbook->price);
    getchar();
    gets(pbook->press);
    printf("name is \"%s\", price is $%.2lf, press is \"%s\"",
		   pbook->name,pbook->price,pbook->press);
    free(pbook);
    return 0;
} 