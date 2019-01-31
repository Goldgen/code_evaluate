#include <stdio.h>
#include <string.h>
int main()
{
    int N, i;
    char str[51] = {'\0'};
	scanf("%d\n", &N);
    for(i = 0; i < N; i++)
    {
        gets(str);
        for(int j = 0; j < strlen(str); j++)
        {
            if(str[j] == 'Z')
                str[j] = 'A';
            else
                str[j]++;
        }
        printf("case #%d: %s\n", i, str);
    }
}