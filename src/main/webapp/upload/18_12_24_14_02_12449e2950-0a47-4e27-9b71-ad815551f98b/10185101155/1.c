#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char bookname[91];
    double price;
    char pressname[31];
}book;
int main()
{
    book mybook;
    book *pos = (book*)malloc(sizeof(book));
    pos = &mybook;
    gets((*pos).bookname);
    scanf("%lf",&((*pos).price));
    getchar();
    gets((*pos).pressname);
    printf("name is \"%s\", price is $%.2lf",(*pos).bookname,(*pos).price);
	printf(", press is \"%s\"\n",(*pos).pressname);
    free(pos);
    return 0;
}