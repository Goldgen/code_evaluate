#include "stdio.h"
#include "string.h"
void reverse(void){
char ch;
scanf("%c",&ch);
if(ch!='?'){
    reverse();
    printf("%c",ch);
}
}
int main()
{
    reverse();
}
