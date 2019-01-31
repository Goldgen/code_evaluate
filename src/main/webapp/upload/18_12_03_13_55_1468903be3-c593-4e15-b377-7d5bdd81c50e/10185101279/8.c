#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char s[90];
    char c[90];
    char temp;

    gets(s);
    strcpy(c,s);
    for(int i=0;i<strlen(s)/2;i++){
        temp=s[i];
        s[i]=s[strlen(s)-i-1];
        s[strlen(s)-i-1]=temp;
    }
    if(strcmp(c,s)==0)
        printf("True");
    else
        printf("False");






	return 0;
}
