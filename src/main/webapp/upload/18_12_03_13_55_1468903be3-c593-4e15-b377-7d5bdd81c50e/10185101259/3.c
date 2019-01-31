#include <stdio.h>
#include <stdlib.h>

int main()
{   int x,y,i;
    char str1[81]={'\0'},str2[81]={'\0'},laceString[161]={'\0'};
    scanf("%s %s",str1,str2);

    x=strlen(str1);
    y=strlen(str2);
    if(x<y)
    {   for(i=0;i<x;i++)
        {   laceString[2*i] = str1[i];
            laceString[2*i + 1] = str2[i];
        }
        for(i=x;i<y;i++)
            laceString[i+x]=str2[i];
    }
    if(x>y)
     {   for(i=0;i<y;i++)
        {   laceString[2*i] = str1[i];
            laceString[2*i + 1] = str2[i];
        }
        for(i=y;i<x;i++)
            laceString[i+y]=str1[i];
    }
    if(x==y)
    {  for(i=0;i<x;i++)
        {   laceString[2*i] = str1[i];
            laceString[2*i + 1] = str2[i];
        }
    }
    printf("%s",laceString);
    return 0;
}