#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[150] = {'\0'};
    gets(str);

    int i, j, count, len = strlen(str);
    for (i=0; i<len; i++){
        count = 0;
        if (str[i]!=' ' && str[i]!='/t')
        {
            printf("%c ",str[i]);
            count++;
            for (j=i+1; j<len; j++){
                if(str[j]==str[i]){
                    count++;
                    str[j] = ' ';
                }
            }
            printf("%d; ",count);
        }

    }

    return 0;
}
