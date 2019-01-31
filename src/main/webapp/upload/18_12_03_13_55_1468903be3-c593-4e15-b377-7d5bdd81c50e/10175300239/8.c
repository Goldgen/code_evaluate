#include <stdio.h>
#include <string.h>

int main()
{
    char input[85],reversed[85];
    int i;
    gets(input);
    for(i=0;i<strlen(input);i++){
        reversed[i]=input[strlen(input)-i-1];
    }
    reversed[i]='\0';
    if(strcmp(input,reversed)==0)
        printf("True");
    else
        printf("False");
    return 0;
}
