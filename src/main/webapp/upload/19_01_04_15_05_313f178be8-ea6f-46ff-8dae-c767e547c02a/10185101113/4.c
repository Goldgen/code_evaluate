#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char ch;
    int n;
}zifu;
int jiancha(char w,zifu danci[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(w==danci[i].ch)
            return -1;
    }
    return 1;
}
int main ()
{

    zifu shuzu[110];
    char str[110];
    int j,n=0,i;
    gets(str);
    for(j=0;j<strlen(str);j++)
        {
            if(str[j]==' ')
                continue;
            else
            {
                if(jiancha(str[j],shuzu,n)==-1)
                {
                    shuzu[n].n++;
                    n++;
                }
                else
                {
                     shuzu[n].ch=str[j];
                     shuzu[n].n=1;
                     n++;
                }
            }
        }

    for(i=0;i<n;i++)
        printf("%c %d; ",shuzu[i].ch,shuzu[i].n);
    return 0;
}