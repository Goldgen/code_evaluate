#include<stdio.h>
#include<string.h>

char* strmcpy(char* t, char* s, int m){
    int i;
    for(i=0;i<m;i++){
        ++s;
    }
    strcpy(t,s);
    return *t;
}

int main()
{
	char t[81];
	char s[81];
	int m;
	gets(s);
	scanf("%d",&m);
	strmcpy(t,s,m);
	puts(t);
}

