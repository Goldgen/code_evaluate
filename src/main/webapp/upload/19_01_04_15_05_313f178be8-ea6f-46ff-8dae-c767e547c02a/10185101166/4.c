#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) 
{

    int count[256] = {0};

    char str[110];
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
        if(str[i]!= ' ')
        count[str[i]]++;

    for (int i = 0; i < 256; i++)
    {
        if(i != 0)
			printf(" ");
		if (count[i] > 0)
            printf("%c %d;", i, count[i]);
    }

    return 0;
}
