
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i,j,k;
    char str[110];
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        k=1;
        for(j=i+1;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
                k++;


        }
    if(str[i]!=' ')
      {
            printf("%c %d; ",str[i],k);
      }

    }
}