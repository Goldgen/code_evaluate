#include <stdio.h>
#include <string.h>
int sort(char (*a)[31], int n)
{
    int i, j;
    char temp[31];
    for(i = 0; i < n - 1; i++)
        for(j = 0; j < n - i - 1; j++)
		{
            if(strcmp(a[j], a[j + 1]) < 0)
            {
                strcpy(temp, a[j]);
                strcpy(a[j], a[j + 1]);
                strcpy(a[j + 1], temp);
            }
        }
}
int main()
{
    int n, i;
    scanf("%d\n", &n);
    char str[n][31];

    for(i = 0; i < n; i++)
        gets(str[i]);
    sort(str, n);
    for(i = 0; i < n; i++)
        puts(str[i]);
}