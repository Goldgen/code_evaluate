#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct book
    {
        char name1[91];
        double price;
        char name2[31]
    };
   struct book *ptr;
   ptr=(struct book*)malloc(sizeof(struct book));
   gets(ptr->name1);
   scanf("%lf\n",&ptr->price);
   gets(ptr->name2);
   printf("name is \"%s\", price is $%.2lf, press is \"%s\"",ptr->name1,ptr->price,ptr->name2);
 free(ptr);
   return 0;
}
