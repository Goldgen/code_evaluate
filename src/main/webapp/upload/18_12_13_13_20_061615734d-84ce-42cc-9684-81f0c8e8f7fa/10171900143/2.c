#include <stdio.h>
#include <stdlib.h>
char* strmcpy(char* t, char* s, int m);

int main()
{
    char string[100];
    gets(string);
    int n;
    scanf("%d",&n);
    char s[100];
    printf("%s",strmcpy(s,string,n));


  return 0;

}
char* strmcpy(char* t, char* s, int m){
    s+=m;char *p=t;
    while(*s!=0){
        *(p++)=*(s++);

    }
    *p=0;
    return t;
}