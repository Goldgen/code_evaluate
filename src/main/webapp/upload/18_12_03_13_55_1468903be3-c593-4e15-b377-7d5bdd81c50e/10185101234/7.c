#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void longestWord(char a[]);
int main()
{
    char a[321];
    gets(a);
    longestWord(a);
}
void longestWord(char a[])
{
     int i,j,count=0,max=0,k;
     char b[321];
     for(i = 0; i <= strlen(a); i++)
     {
         if(a[i] != ' '  && a[i]!= '\0')
             count ++;
        else if(a[i] == ' ' || a[i] == '\0')
         {
             if(max < count)
             {
                 k=0;
                 max = count;
                 for(j = i-max; j < i; j++)
                     b[k++] = a[j];
                b[k] = '\0';
             }
              count = 0;


         }
     }
     puts(b);
}
