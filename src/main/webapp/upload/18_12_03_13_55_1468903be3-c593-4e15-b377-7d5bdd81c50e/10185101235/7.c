#include<stdio.h>
#include<string.h>

void LongestWord(const char str[], char result[]);

void main(void)
{
    char result[82] = "\0";
    char str[82] = "\0";
    fgets(str,82,stdin);
    LongestWord(str,result);
    puts(result);
}

void LongestWord(const char str[],char result[])
{
    char word[82] = "\0";
    int i = 0;
    int j = 0;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==' '||str[i]=='\n')
        {
            if(strlen(word)>strlen(result))
            {
                strcpy(result,word);
            }
            j=0;
        }
        else
        {
            word[j] = str[i];
            j++;
        }
    }
}
