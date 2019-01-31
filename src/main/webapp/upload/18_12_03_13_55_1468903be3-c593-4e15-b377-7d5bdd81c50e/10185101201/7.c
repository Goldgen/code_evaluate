#include"stdio.h"
#include"stdlib.h"
#include"string.h"
void LongestWord(const char str[],char result[])
{
    int i,t=0,max=0,b,r;
    char *g=&result[0];
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]!=' ')
        {
            t++;
            if(max<t)
            {
                max=t;
                b=i-max+1;
            }
        }
        else
            t=0;
    }
    for(i=0;i<max;i++)
        *(g+i)=str[i+b];
}
int main()
{
    int i;
    char str[85],result[85];
    scanf("%s\n",&str);
    LongestWord(str,result);
    for(i=0;i<strlen(result);i++)
        printf("%c",result[i]);
}