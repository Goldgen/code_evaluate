/*
 * 101: 请定义结构体Book类型的指针，
 * 并用malloc函数分配结构体变量的内存空间
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[91];
    double price;
    char press[31];
} Book;

int main(void) {
    Book* b = (Book*)malloc(sizeof(Book));
    gets(b->name);
    scanf("%lf",&b->price);
    getchar();
    gets(b->press);
    printf("name is \"%s\", price is $%.2f, press is \"%s\"\n", b->name, b->price, b->press);
    free(b);
    return 0;
}
