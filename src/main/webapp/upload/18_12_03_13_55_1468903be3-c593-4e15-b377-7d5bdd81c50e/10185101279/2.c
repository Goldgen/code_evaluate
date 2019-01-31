#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int n;
	scanf("%d",&n);
	char s[n][32];
	char temp[32];
	getchar();
	for(int i=0;i<n;i++)
        gets(s[i]);
    for(int i=n-1;i>0;i--){
        for(int j=0;j<i;j++)
            if((strcmp(s[j+1],s[j]))>0){
                strcpy(temp,s[j+1]);
                strcpy(s[j+1],s[j]);
                strcpy(s[j],temp);
            }

    }
    for(int i=0;i<n;i++)
        {puts(s[i]);
        }
}
