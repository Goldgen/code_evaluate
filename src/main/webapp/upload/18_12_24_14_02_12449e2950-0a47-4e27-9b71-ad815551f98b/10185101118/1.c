#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct book
{
    char a[93],c[33];
    double b;
}book;
int main()
{
    char *p;
    int t;
    book *k;
    k=(book*)malloc(sizeof(book));
    fgets(k->a,93,stdin);
    t=strlen(k->a);
    p=k->a+t-1;
    *p='\0';
    scanf("%lf",&k->b);
    getchar();
    fgets(k->c,33,stdin);
    t=strlen(k->c);
    p=k->c+t-1;
    *p='\0';
    printf("name is \"%s\", price is $%.2lf, press is \"%s\"",k->a,k->b,k->c);
    free(k);
    return 0;
}
