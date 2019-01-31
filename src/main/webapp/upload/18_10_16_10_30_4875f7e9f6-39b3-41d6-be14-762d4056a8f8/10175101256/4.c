#include <stdio.h>
int main(){
    char a=0;
    scanf("%c",&a);
    int delta = 'a'-'A';
    if(a>='A'&&a<='Z')
        printf("%c",a+delta);
    else
        printf("ERROR");
}