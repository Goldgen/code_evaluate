#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char a[81];
	char b[81];
	scanf("%s %s",a,b);
	if((strlen(a))<=(strlen(b))){
        for(int i=0;i<strlen(a);i++)
            printf("%c%c",a[i],b[i]);
        for(int i=strlen(a);i<strlen(b);i++)
            printf("%c",b[i]);
	}
	else
   {
        for(int i=0;i<strlen(b);i++)
            printf("%c%c",a[i],b[i]);
            for(int i=strlen(b);i<strlen(a);i++)
            printf("%c",a[i]);
	}
}
