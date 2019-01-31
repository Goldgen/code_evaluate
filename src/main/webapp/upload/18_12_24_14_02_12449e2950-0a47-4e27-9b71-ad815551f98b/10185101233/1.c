#include<stdio.h>
struct book{
    char name[90];
    double price;
    char press[30];
};
int main(){
    struct book *p=malloc(150*sizeof(char));
    gets((*p).name);
    scanf("%lf",&(*p).price);
    getchar();
    gets((*p).press);
    printf("name is \"%s\", price is $%.2lf, press is \"%s\"",(*p).name,(*p).price,(*p).press);
    free(p);
}