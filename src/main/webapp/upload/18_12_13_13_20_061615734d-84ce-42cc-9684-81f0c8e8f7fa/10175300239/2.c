#include <stdio.h>
#include <stdlib.h>

char* strmcpy(char* t, char* s, int m);

int main()
{
    int m,i;
    char s[85],t[85];
    gets(s);
    scanf("%d",&m);
    char *pt;
    pt=&t;
    char *ps;
    ps=&s;
    ps=ps+m;
    for(i=0;i<strlen(s)-m;i++){
        *pt=*ps;
        pt++;
        ps++;
    }
    *pt='\0';
    printf("%s",t);
    return 0;
}
