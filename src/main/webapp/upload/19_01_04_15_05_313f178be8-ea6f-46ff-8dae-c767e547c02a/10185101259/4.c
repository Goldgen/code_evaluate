#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100

int main()
{
   char word[SIZE]={'\0'},temp[SIZE]={'\0'},count[SIZE]={'\0'};
   int i=0,j=0,k,flag;

        gets(word);
    for(i=0;i<strlen(word);i++)
    {

    flag=1;
       if(isgraph(word[i]))
       {


            for(k=0;k<j;k++)
            {

                if(word[i]==temp[i])
                {
                    count[k]++;
                    flag=0;
                }
            }
       }
       if(flag)
       {
           temp[j]=word[i];
           j++;
           count[j]++;
       }
    }

    for(k=0;k<j;k++)
        printf("%c %d;",temp[k],count[k]);

   return 0;
}
