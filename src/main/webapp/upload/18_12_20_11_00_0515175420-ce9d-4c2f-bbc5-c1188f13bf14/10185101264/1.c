#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int sort(char** a, int n)
{
    int i, j;
    char temp[31] = {'\0'};
    for(i = 0; i < n - 1; i++)
        for(j = 0; j < n - i - 1; j++)
		{
            if(strcmp(a[j], a[j + 1]) > 0)
            {
                strcpy(temp, a[j]);
                strcpy(a[j], a[j + 1]);
                strcpy(a[j + 1], temp);
            }
        }
}
char** input(int n)
{
	char** p = (char **)calloc(n, sizeof(char*));
	for(int i = 0; i < n; i++)
		p[i] = (char *)calloc(31, sizeof(char));
	for(int i = 0; i < n; i++)
		gets(p[i]);
	return p;
}
void FREE(char** p, int n)
{
	for(int i = 0; i < n; i++)
	{
		free(p[i]);
		p[i] = NULL;
	}
	free(p);
}
int main()
{
	char** p;
	int n, i;
	scanf("%d", &n); getchar();
	p = input(n);
	sort(p, n);
	for(i = 0; i < n; i++)
		puts(p[i]);
	FREE(p, n);
	return 0;
}