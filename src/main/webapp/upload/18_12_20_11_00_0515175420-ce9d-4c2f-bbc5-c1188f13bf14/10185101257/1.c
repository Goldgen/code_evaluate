#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char** input(int n){
	char** str = (char **)calloc(n, sizeof(char*));
	for(int i = 0; i < n; i++)
		str[i] = (char *)calloc(31, sizeof(char));
	for(int i = 0; i < n; i++)
		gets(str[i]);
	return str;
}
int sort(char** str, int n){
    char temp[31] = {'\0'};
    for(int i = 0; i < n - 1; i++)
        for(int j = 0; j < n - i - 1; j++)
            if(strcmp(str[j], str[j + 1]) > 0){
                strcpy(temp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
            }
}

void FREE(char** str, int n){
	for(int i = 0; i < n; i++)
		free(str[i]);
	free(str);
}
int main(){
	char** str;
	int n, i;
	scanf("%d", &n);
	getchar();
	str = input(n);
	sort(str, n);
	for(i = 0; i < n; i++)
		puts(str[i]);
	FREE(str, n);
	return 0;
}