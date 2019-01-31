#include <stdio.h>
#include <string.h>

void NX(char* p);
int main(){
	char ch[100];
    gets(ch);
    NX(ch);
    return 0;
}
void NX(char* p){
    if(*p!='\?'){
    NX(p+1);
    printf("%c",*p);
	}
}