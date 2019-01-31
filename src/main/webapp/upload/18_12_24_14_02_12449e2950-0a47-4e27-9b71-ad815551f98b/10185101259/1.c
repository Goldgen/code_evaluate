#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct book
    {
        char *name;
        double price;
        char *press;

    };
int main()
{   struct book mybook;
    mybook.name=(char*)calloc(91,sizeof(char));
    mybook.press=(char*)calloc(1000,sizeof(char));
    gets(mybook.name);
    scanf("%lf",&mybook.price);
    getchar();
    gets(mybook.press);
    printf("name is \"%s\", price is $%.2f, press is \"%s\"", mybook.name, mybook.price, mybook.press);
    return 0;
}
