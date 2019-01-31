#include <stdio.h>

int main()
{
    char a;
    scanf("%c",&a);
    if(a>=65&&a<=90){
        printf("%c",a+('a'-'A'));
    }
    else{
        printf("ERROR");
    }
    return 0;
}