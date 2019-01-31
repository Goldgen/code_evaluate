#include <stdio.h>
#include <stdlib.h>
struct book{
 char name[97];
 double price;
 char ename[37];
};
int main()
{ struct book* a=(struct book*)malloc(sizeof(struct book));
   gets(a->name);
  scanf("%lf",&a->price);
  getchar();
  gets(a->ename);
  printf("name is \"%s\", price is $%.2lf, press is \"%s\"",a->name,a->price,a->ename);
  return 0;
}
