#include<stdio.h>>
#include<string.h>

int  main()
{   int i=0;
    int l=0;
    char s[100];
	gets(s);
	l=strlen(s);
	for(i=0;i<(l/2);i++)
    {
        if (s[i]==s[l-1-i]||l==1)
        {
            printf("True");
            return 0;
        }
    }
    printf("False");
    return 0;
}
