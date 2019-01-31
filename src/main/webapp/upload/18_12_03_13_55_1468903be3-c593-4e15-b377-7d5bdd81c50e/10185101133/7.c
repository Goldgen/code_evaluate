#include <stdio.h>

#include <string.h>

int main()

{
    char str[81][81];
	char longest[81];
    int i=0;
    while(scanf("%s",str[i])!=EOF)
        i++;
    strcpy(longest,str[0]);
    for(int j=1;j<i;j++)
    {
        if(strlen(str[j])>strlen(longest))
            strcpy(longest,str[j]);
    }
    puts(longest);
    return 0;

}