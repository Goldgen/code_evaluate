#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
	char id[100],prs[100];
	double prc;
}book;
int main(){
	book *p;
	p=malloc(sizeof(book));
	fgets(p->id,100,stdin);
	p->id[strlen(p->id)-1]='\0';
	scanf("%lf ",&p->prc);
	fgets(p->prs,100,stdin);
	p->prs[strlen(p->prs)-1]='\0';
	printf("name is \"%s\", price is $%.2lf, press is \"%s\"",p->id,p->prc,p->prs);
	free(p);
	return 0;
} 