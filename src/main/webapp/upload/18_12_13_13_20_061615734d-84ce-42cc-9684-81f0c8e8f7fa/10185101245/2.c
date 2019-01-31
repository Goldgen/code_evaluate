#include <stdio.h>
#include<string.h>
void* strmcpy(char* s, int m)
{
 char*i,cc[81],*j=cc;
 for(i=s+m;*j++=*i++;);
 printf("%s",cc);
}

int main() {
char t[81],*p=t;
int m;
gets(p);
scanf("%d",&m);
strmcpy(p,m);
    return 0;
}
