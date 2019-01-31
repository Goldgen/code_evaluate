#include <stdio.h>
char* _strcat(char *pt,char *ps,int m)
{
    char *result=pt;
    int i;
    for(i=0;i<m;i++)
    {
        *ps++;
    }
    while(*ps!='\0')
    {
        *pt=*ps;
        *pt++;
        *ps++;
    }
    *pt='\0';
    return result;

}
int main()
{
    char s[81],t[80];
    char *ps=s,*pt=t;
    int m;
    gets(s);
    scanf("%d",&m);
    printf("%s",_strcat(pt,ps,m));
    return 0;
}