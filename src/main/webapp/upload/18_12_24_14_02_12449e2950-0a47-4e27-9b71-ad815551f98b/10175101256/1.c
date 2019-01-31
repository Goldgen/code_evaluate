#include <stdio.h>
#include <stdlib.h>
struct book{
    char *names;
     double price;
    char *press;
};
void f(struct book b){
    free(b.names);
    free(b.press);
}
int main(){
    struct book b1;
        b1.names=(char *)malloc(100*sizeof(char));
        b1.press=(char *)malloc(50*sizeof(char));
    gets(b1.names);
    scanf("%lf",&b1.price);
    getchar();
    gets(b1.press);
    printf("name is \"%s\", price is $%.2f, press is \"%s\"\n",b1.names,b1.price,b1.press);
    f(b1);
}
