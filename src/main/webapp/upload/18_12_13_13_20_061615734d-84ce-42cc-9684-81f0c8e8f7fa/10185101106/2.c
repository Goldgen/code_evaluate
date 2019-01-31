#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *str_cpy(char *str, int sm);                       
int main()
{
    char *string;
    string=(char *)malloc(80*sizeof(char));               
    gets(string);
    int m;
    scanf("%d", &m);
    int k;
    int n;
    n = strlen(string);
    k = n-m;
    printf("%s", str_cpy(string, m));       

    return 0;
}

char *str_cpy(char *str, int sm)
{
    char *p;
    int i;
    p=(char *)malloc(80*sizeof(char));
    i=0, p=str+sm;
	while(*p)
	{
		*(str+i++) = *p++;
	}
	*(str+i)='\0';
    return str;
}

