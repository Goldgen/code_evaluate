
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str1[101];
    char str2[101];
    scanf("%s",&str1);
    scanf("%s",&str2);
    int all[100];
    int i=0;
    while((str1!="#")&&(str2!="#"))
    {
        int len2=strlen(str2);
        int count=0;
        char* p1;
        p1=&str1;
        while(*p1!='\0')
        {
            if(strncmp(p1,str2,len2)==0)
            {
                count++;
                p1+=len2;
            }
            else
            {
                p1++;
            }
        }
    all[i]=count;
    i++;
    scanf("%s",&str1);
    scanf("%s",&str2);
    }
    for(int j=0;j<i;j++)
        printf("%d",all[j]);
    return 0;
}

