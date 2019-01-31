#include <stdio.h>
#include <string.h>
void mygets(char *des)
{
    char a;
    while((a=getchar())&&a!='?')
    {
        *des = a;
        des++;
    }
    *des = '\0';
    return ;
}
int main()
{
    char str[10001];
    char *pos;
    pos = str;
    mygets(pos);
    int len = strlen(str);
    for(int x=len-1;x>=0;x--)
        printf("%c",str[x]);
    return 0;
}
