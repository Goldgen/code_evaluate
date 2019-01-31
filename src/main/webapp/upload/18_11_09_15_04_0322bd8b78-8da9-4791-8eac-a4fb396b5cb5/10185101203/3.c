#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a;
    a=getchar();
    switch(a)
{case'a':case'A':case'e':case'E':case'i':case'I':case'o':case'O':case'U':case'u':
    printf("yes");break;
default:
    printf("no");break;}

}
