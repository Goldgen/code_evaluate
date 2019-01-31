#include <stdio.h>
#include <string.h>
void LongestWord(const char str[])
{
    char word[81];
    int count=0,max=0,fuzhu;
    for(int i=0;i<=strlen(str);i++)
    {
        if(str[i]!=' '&&i!=strlen(str))
            count++;
        else
        {
            if(count>max)
            {
                max=count;
                fuzhu=i-count;
            }
            count=0;
        }
    }
    for(int i=0;i<max;i++,fuzhu++)
    {
        word[i]=str[fuzhu];
    }
    word[max]='\0';
    printf("%s",word);
    return;
}
int main(void)
{
    char str[81];
    gets(str);
    LongestWord(str);
    return 0;
}
