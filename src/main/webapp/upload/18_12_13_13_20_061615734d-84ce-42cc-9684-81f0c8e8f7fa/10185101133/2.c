#include <stdio.h>
#include <stdlib.h>

char* strmcpy(char* t,char* s,int m){
    return t=s+m;
}

int main()
{
    char str[81],str2[81];
    char *t=str2;
    char *s=str;
    int m=0;
    gets(s);
    scanf("%d",&m);
    printf("%s",strmcpy(t,s,m));
    return 0;
}
