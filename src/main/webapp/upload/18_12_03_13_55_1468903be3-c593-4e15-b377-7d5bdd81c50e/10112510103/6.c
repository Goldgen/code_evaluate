#include <stdio.h>

int main() {
    int c;
    while((c = getchar()) != EOF){
        printf("%d ",c);
        switch(c){
            case ' ' : puts("' '");break;
            case '\t' : puts("'\\t'");break;
            case '\n' : puts("'\\n'");break;
            case '\r' : puts("'\\r'");break;
            default : printf("'%c'\n",c);break;
        }
    }
}
