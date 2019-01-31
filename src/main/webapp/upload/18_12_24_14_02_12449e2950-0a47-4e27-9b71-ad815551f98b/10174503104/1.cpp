#include <bits/stdc++.h>
using namespace std;
struct Book
{
	char name[100],press[100];
	double prc;
};
int main(){
	Book *tmp=(Book *)malloc(sizeof(Book));
	gets(tmp->name);
	scanf("%lf\n",&tmp->prc);
	gets(tmp->press);
	printf("name is \"%s\", price is $%.2lf, press is \"%s\"\n",tmp->name,tmp->prc,tmp->press);
	return 0;
}
