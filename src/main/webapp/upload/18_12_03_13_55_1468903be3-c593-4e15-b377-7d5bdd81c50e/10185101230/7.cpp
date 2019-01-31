#include<stdio.h>>
#include<string.h>
void LongestWord( char* r,char* c)
{
    char*b;
    char A[81];
    char*a;
    int i,j;
    b=r;
    a=A;

    for(j=0;j<strlen(r);j++)
    {
        if(*(b+j)==' '||*(b+j)=='\0')
        {
            j++;
        }
        for(i=0;*(b+j)!=' '&&*(b+j)!='\0';i++,j++)
        {
            *(a+i)=*(b+j);
        }
        *(a+i)='\0';
        if(strlen(c)<strlen(a))
        {
            strcpy(c,a);
        }
    }
}
int  main()
{   char s[81],r[81];
    gets(s);
    LongestWord(s,r);
    printf("%s\n",r);
    return 0;
}
