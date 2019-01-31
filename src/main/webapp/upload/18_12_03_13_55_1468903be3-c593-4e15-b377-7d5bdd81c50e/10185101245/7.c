#define __STDC_WANT_LIB_EXT1__ 1
#include <stdio.h>
#include <string.h>
#include <math.h>
char judge(const char str[])
{
    char result[81]={'\0'};
    char temp[81]={'\0'};
    int i=0,count=0,maxcount=0,j=0,m=0;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]!=' ')
           {
               count++;
            temp[j]=str[i];
            j++;
           }
        else
        {
            if(maxcount<count)
            {
            maxcount = count;
            strcpy(result,temp);
            }
            count = 0;
            j=0;
            m++;
        }

    }
    if(count>maxcount)
        strcpy(result,temp);
    if(m==0)
        strcpy(result,str);
  puts(result);
}
int main()
{
    char str[81]={'\0'};
    gets(str);
    judge(str);
    return 0;
}
