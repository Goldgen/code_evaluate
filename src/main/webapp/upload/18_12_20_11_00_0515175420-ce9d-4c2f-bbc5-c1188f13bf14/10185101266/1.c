#include <stdio.h>
#include <string.h>
void U(char** m, int n)
{
    int i=0;
    while(i<n)
	{
		free(m[i]);
		m[i] = NULL;
		i++;
	}
	free(m);
}
char**input(int n)
{
	char** m=(char **)calloc(n, sizeof(char*));
	int i=0;
	while(i<n)
	{
		m[i]=(char *)calloc(31, sizeof(char));
		i++;
	}
	i=0;
	while(i<n)
	{
		gets(m[i]);
		i++;
	}
	return m;
}
int sortage(char** s, int n)
{
    int i=0,j;
    char temp[31] = {'\0'};
    while(i<n-1)
	{   
		for(j=0;j<n-i-1;j++)
		{
            if(strcmp(s[j], s[j+1]) > 0)
            {
                strcpy(temp, s[j]);
                strcpy(s[j], s[j+1]);
                strcpy(s[j+1], temp);
            }
        }
	    i++;
	}
}

int main()
{
	char**m;
	int n, i=0;
	scanf("%d", &n);
    getchar();
	m=input(n);
	sortage(m, n);
	while(i<n)
    {
		puts(m[i]);
		i++;
    }
	U(m,n);
	return 0;
}
