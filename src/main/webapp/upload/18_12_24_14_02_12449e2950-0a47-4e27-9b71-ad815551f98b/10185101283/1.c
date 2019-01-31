#include<stdio.h>
struct book{
  char name[90];
  double price;
  char press[30];
};
int main()
{
    struct book a;
    gets(a.name);
    scanf("%lf\n",&a.price);
    gets(a.press);
    printf("name is \"%s\", price is $%.2lf, press is \"%s\"",a.name,a.price,a.press);
    return 0;
}
