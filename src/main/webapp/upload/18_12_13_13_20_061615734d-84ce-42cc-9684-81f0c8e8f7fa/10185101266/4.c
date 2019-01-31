#include <stdio.h>
#include <string.h>
int main()
{
    int M,n;
    char str[51] = {'\0'};
	scanf("%d\n", &M);
    for(n=0;n<M; n++)
    {
        gets(str);
        for(int i= 0;i< strlen(str); i++)
        {
            if(str[i] == 'Z')
                str[i] = 'A';
            else
                str[i]++;
        }
        printf("case #%d: %s\n", n, str);
    }
}