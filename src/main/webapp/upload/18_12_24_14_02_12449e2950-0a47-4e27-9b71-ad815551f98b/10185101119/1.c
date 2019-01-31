#include <stdio.h>
int main(){
	struct book{
		char bookname[100];
		double price;
		char press[40];
	}A,*B;
	B=&A;
	gets((*B).bookname);
	scanf("%lf",&B->price);
	getchar();
	gets(B->press);
	printf("name is \"%s\", price is $%.2lf, press is \"%s\"",A.bookname,A.price,A.press);
	return 0;
}