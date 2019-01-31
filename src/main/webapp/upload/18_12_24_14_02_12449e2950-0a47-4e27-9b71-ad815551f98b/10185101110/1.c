#include<stdio.h>
int main()
{
	struct book
	{
		char name[30];
		float price;
		char name2[30];
	}book1;
	scanf("%s",&book1.name);
	scanf("%f",&book1.price);
	scanf("%s",&book1.name2);
	printf("name is \"%s\", price is $%.2f, press is \"%s\"",book1.name,book1.price,book1.name2);
	return 0;
 } 