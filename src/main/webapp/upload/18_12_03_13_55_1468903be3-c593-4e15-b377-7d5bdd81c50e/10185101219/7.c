#include<stdio.h>>
#include<string.h>
void LongestWord( char* str,char* c)
{
    char*x;
    char p[81];
    char*a;
    int i,j;
    x=str;
    a=p;
    for(j=0;j<strlen(str);j++)
    {
        if(*(x+j)==' '||*(x+j)=='\0')
        {
            j++;
        }
        for(i=0;*(x+j)!=' '&&*(x+j)!='\0';i++,j++)
        {
            *(a+i)=*(x+j);
        }
        *(a+i)='\0';
        if(strlen(c)<strlen(a))
        {
            strcpy(c,a);
        }
    }
}
int  main()
{   char s[81],result[81];
    gets(s);
    LongestWord(s,result);
    printf("%s\n",result);
    return 0;
}
