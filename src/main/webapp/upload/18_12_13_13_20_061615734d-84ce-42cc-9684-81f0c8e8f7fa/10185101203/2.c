#include <stdio.h>
#include <stdlib.h>
char *strmcpy(char *str, int sm);                         
int main()
{
    char *string;
    string=(char *)malloc(80*sizeof(char));               
    gets(string);
    int m;
    scanf("%d", &m);
    printf("%s", strmcpy(string, m));  
    system("pause");
    return 0;
}

char *strmcpy(char *str, int sm)
{
    char *p;
    int i;
    p=(char *)malloc(80*sizeof(char));
    for (i=0, p=str+sm;*p; *(str+i++)=*p++);
    *(str+i)='\0';
    return str;
}