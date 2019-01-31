#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main()
{
    char str[101] = {'\0'}, word[101] = {'\0'};
    int num[101] = {0}, i, j, k = 0, flag = 1;
    gets(str);
    for(i = 0; i < strlen(str); i++)
    {
        flag = 0;
        if(isgraph(str[i]))
        {
            flag = 1;
            for(j = 0; j < k; j++)
                if(str[i] == word[j])
                {
                    num[j]++;
                    flag = 0;
                }
        }
        if(flag)
        {
            word[k] = str[i];
            num[k]++;
            k++;
        }
	}
    for(i = 0; i < k; i++)
        printf("%c %d; ", word[i], num[i]);
}