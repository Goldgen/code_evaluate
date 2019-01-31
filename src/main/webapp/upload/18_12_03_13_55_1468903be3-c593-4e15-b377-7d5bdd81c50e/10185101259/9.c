#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], search[81];
    gets(str);
    scanf("%s", search);
    int len1, len,i,flag = 0,count = 0,loc;
    char * p = str, str1[len1 + 1];
    len1 = strlen(search);
    len = strlen(str);

    for(i = 0; i < len; i++)
    {
        strcpy(str1,"\0");
        strncat(str1, p + i, len1);
        if(strcmp(search, str1) == 0)
        {
            count++;
            flag++;

        }
        if(flag == 1)
          {      loc = i;
                 flag++;
          }
    }
    if(count == 0)
        loc = -1;
    printf("%s: %d time(s), first at %d", search, count, loc);
}
