#include <stdio.h>
#include <string.h>

char* strmcpy(char* t, char* s, int m) {
    int i=0;
    for(i=0;i<m;i++)
        s++;
   while(*s!='\0')
   {
       *t=*s;
       t++;
       s++;
   }
   *t='\0';
}

int main() {
    char n[80];
    char k[80];
    char* t=&k;
    char* s=&n;
    int m;
    s=n;
    gets(s);
    scanf("%d",&m);
    strmcpy(t,s,m);
    puts(t);
    return 0;
}
