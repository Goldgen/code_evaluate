#include<stdio.h>
#include<stdlib.h>
struct Book
{
    char bookName[91];
    double price;
    char press[31];
};
int main(void)
{
    struct Book* ptrBook;
    ptrBook = (struct Book*)malloc(sizeof(struct Book));
    gets(ptrBook->bookName);
    scanf("%lf",&ptrBook->price);
    getchar();
    gets(ptrBook->press);
    printf("name is \"%s\", price is $%.2lf, press is \"%s\"",
		   			ptrBook->bookName,ptrBook->price,ptrBook->press);
}
