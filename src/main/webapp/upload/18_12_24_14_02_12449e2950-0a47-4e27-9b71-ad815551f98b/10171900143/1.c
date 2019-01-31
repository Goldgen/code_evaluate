#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[95];
    double price;
    char press[40];
}Book;

int main(){
    Book a;
    gets(a.name);
    scanf("%lf",&a.price);getchar();
    gets(a.press);
    printf("name is \"%s\", price is $%.2f, press is \"%s\"",a.name,a.price,a.press);
    return 0;
}
