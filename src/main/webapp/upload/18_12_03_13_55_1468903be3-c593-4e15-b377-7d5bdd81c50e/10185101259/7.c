#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{   char str[81]={'\0'},word[81]={'\0'},max[81]={'\0'};
    int i,j=0,flag=0,long1,longest=0;
    gets(str);
    long1=strlen(str);
    for(i=0;i<long1;i++)
    {
        if(str[i]==' ')
        {   if(longest<j)
            {   strcpy(max,word);
                longest=j;
            }
            j=0;
            flag++;
        }
        else
        {   word[j]=str[i];
            j++;
        }
    }
    if(longest<j)
        strcpy(max,word);
    if(flag==0)
        strcpy(max,str);

    puts(max);
    return 0;
}
