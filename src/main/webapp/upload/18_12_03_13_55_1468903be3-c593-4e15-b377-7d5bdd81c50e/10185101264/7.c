#include <stdio.h>
#include <string.h>
int main()
{
    char word_max[1000] = {'\0'}, str[1000] = {'\0'}, word[1000] = {'\0'};
    int i, j = 0, len, len_max = 0, flag = 0;
    gets(str);
    len = strlen(str);

    for(i = 0; i < len; i++)
    {
        if(str[i] == ' ')
        {
            if(len_max < j)
            {
                strcpy(word_max, word);
                len_max = j;
            }
            j = 0;
			flag++;
        }
        else
        {
            word[j] = str[i];
            j++;
        }
    }
    if(len_max < j)
        strcpy(word_max, word);
	if(flag == 0)
		strcpy(word_max, str);

    puts(word_max);
}