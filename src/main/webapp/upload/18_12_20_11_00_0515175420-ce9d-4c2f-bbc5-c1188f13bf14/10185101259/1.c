#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char** input(int n)
{
	char** string = (char **)calloc(n, sizeof(char*));
	for(int i = 0; i < n; i++)
		string[i] = (char *)calloc(31, sizeof(char));
	for(int i = 0; i < n; i++)
		gets(string[i]);
	return string;
}
int sort(char** string, int n)
{
    int i, j;
    char temp[31] = {'\0'};
    for(i = 0; i < n - 1; i++)
        for(j = 0; j < n - i - 1; j++)
		{
            if(strcmp(string[j], string[j + 1]) > 0)
            {
                strcpy(temp, string[j]);
                strcpy(string[j], string[j + 1]);
                strcpy(string[j + 1], temp);
            }
        }
}

void FREE(char** string, int n)
{
	for(int i = 0; i < n; i++)
	{
		free(string[i]);

	}
	free(string);
}
int main()
{
	char** string;
	int n, i;
	scanf("%d", &n);
	getchar();
	string = input(n);
	sort(string, n);
	for(i = 0; i < n; i++)
		puts(string[i]);
	FREE(string, n);
	return 0;
}