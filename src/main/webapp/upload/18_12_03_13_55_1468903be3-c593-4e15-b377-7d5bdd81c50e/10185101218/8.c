#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s1[80]="0";
    char s2[80]="0";
    gets(s1);
    int js2 = strlen(s1);
    for(int js = 0;js < strlen(s1);js++){
        s2[js] = s1[js2-1];
        js2--;
    }
    if(strcmp(s1,s2) == 0){
        printf("True");
    }
    else
        printf("False");
    return 0;
}
