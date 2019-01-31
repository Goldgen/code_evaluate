#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
int main()
{
    char a;
    scanf ("%c",&a);
    if (a>=65&&a<=90)       
        {a=a+('a'-'A');
        printf("%c",a);}
    else
        printf("ERROR");
    return 0;
}
