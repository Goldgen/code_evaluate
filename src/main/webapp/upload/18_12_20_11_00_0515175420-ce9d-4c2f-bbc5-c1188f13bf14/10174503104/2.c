#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 201
int judge(char * str){
	for(int i = 0; i < strlen(str); i++)
		if(isalpha(str[i]) == 0)
			return 0;
	return 1;
}
int array(char (*a)[SIZE], int n){
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
	scanf("%d",&T);
	getchar();
	for(i=0;i<T;i++)
	{
        char str[SIZE]={'\0'},str1[SIZE][SIZE]={'\0'},str2[SIZE][SIZE]={'\0'};
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
                str1[row][col]=str[j];
                col++;
            }
        }
        row++;
        for(j=0,m=0;j<row;j++)
        {
            if(judge(str1[j]))
            {
                strcpy(str2[m],str1[j]);
                m++;
            }
        }
        array(str2,m);
        printf("case #%d:\n",i);
        for(j=0,m=0;j<row;j++)
        {
            if(judge(str1[j]))
            {
                if(j==row-1)
                    printf("%s\n",str2[m]);
                else
                {
                    printf("%s ",str2[m]);
                    m++;
                }
            }
            else
            {
                if(j==row-1)
                    printf("%s\n",str1[j]);
                else
                    printf("%s ",str1[j]);
            }
        }
	}
	return 0;
}