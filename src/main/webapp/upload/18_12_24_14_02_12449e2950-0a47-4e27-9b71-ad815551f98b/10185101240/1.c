#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct book
{
    char name[100];
    double price;
	char press[100];
};
 
int main(void)
{
    struct book bk;
    struct book *p;
	p=(struct book*)malloc(sizeof(struct book));
	p=&bk;
    gets(bk.name);
    scanf("%lf", &(bk.price));
	getchar();
    gets(bk.press);
   
    printf("name is \"%s\",", p->name);
    printf(" price is $%.2lf,", p->price);
    printf(" press is \"%s\"", p->press);
     free(p);
    return 0;
}
		
	