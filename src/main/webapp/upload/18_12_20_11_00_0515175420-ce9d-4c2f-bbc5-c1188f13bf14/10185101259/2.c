

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 201
int isword(char * str){
	for(int i = 0; i < strlen(str); i++)
		if(isalpha(str[i]) == 0)
			return 0;
	return 1;
}
int sort(char (*a)[SIZE], int n){
    int i, j;
    char temp[SIZE] = {'\0'};
    for(i = 0; i < n - 1; i++)
        for(j = 0; j < n - i - 1; j++)
            if(strcmp(a[j], a[j + 1]) > 0)
            {
                strcpy(temp, a[j]);
                strcpy(a[j], a[j + 1]);
                strcpy(a[j + 1], temp);
            }
}
int main()
{
	int T,i,j,m,col,row;
	scanf("%d\n",&T);
	for(i=0;i<T;i++)
	{
        char str[SIZE]={'\0'},noblank[SIZE][SIZE]={'\0'},word[SIZE][SIZE]={'\0'};
        gets(str);
        for(j=0,col=0,row=0;j<strlen(str);j++)
        {
            if(str[j]==' ')
            {
                col=0;
                row++;
            }
            else
            {
                noblank[row][col]=str[j];
                col++;
            }
        }
        row++;
        for(j=0,m=0;j<row;j++)
        {
            if(isword(noblank[j]))
            {
                strcpy(word[m],noblank[j]);
                m++;
            }
        }
        sort(word,m);
        printf("case #%d:\n",i);
        for(j=0,m=0;j<row;j++)
        {
            if(isword(noblank[j]))
            {
                if(j==row-1)
                    printf("%s\n",word[m]);
                else
                {
                    printf("%s ",word[m]);
                    m++;
                }
            }
            else
            {
                if(j==row-1)
                    printf("%s\n",noblank[j]);
                else
                    printf("%s ",noblank[j]);
            }
        }
	}
	return 0;
}
