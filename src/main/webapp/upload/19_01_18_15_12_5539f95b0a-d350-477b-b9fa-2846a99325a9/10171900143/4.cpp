#include <stdio.h>
#include <limits.h>
int main(){
    char a;
    while(scanf("%c",&a)!=EOF){
            getchar();
        if(a>='A'&&a<='Z')printf("%c",a+32);
        else printf("ERROR");
    }
return 0;}
