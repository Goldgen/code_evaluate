#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 201
int isletter(char * str)
{
	for(int i = 0; i < strlen(str); i++)
		if(!isalpha(str[i]))
			return 0;
	return 1;
}
int sort(char (*a)[SIZE], int n)
{
    int i, j;
    char temp[SIZE] = {'\0'};
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
int main()
{
	int n, i;
	scanf("%d\n", &n);

	for(i = 0; i < n; i++)
	{
        char str[SIZE] = {'\0'}, temp[SIZE][SIZE] = {'\0'}, letter[SIZE][SIZE] = {'\0'}, ch;
        int num = 0, j = 0, k = 0;
		while(scanf("%s", str))
		{
			strcpy(temp[num], str);
			num++;
			if(isletter(str))
			{
			    strcpy(letter[j], str);
			    j++;
			}
			if((ch = getchar()) == '\n')
				break;
		}

		sort(letter, j);
		printf("case #%d:\n", i);
		for(j = 0, k = 0; j < num - 1; j++)
		{
			if(isletter(temp[j]))
			{
                printf("%s ", letter[k]);
                k++;
			}
			else
                printf("%s ", temp[j]);
		}
		if(isletter(temp[j]))
            printf("%s\n", letter[k]);
        else
            printf("%s\n", temp[j]);
	}
}