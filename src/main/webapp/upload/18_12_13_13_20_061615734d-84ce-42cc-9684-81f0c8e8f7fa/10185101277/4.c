#include <stdio.h>
#include <string.h>
#include<ctype.h>
#define SIZE 51

char change(char* str)
{
    int str_len = strlen(str);
	for (int i=0;i<str_len;i++)
	{
		str[i]=(str[i]-'A'+1)%26+'A';
	}
}
int main()
{
    int n,i;
    scanf("%d",&n);
    char a[n][SIZE];
    for(i=0;i<n;i++){
        scanf("%s",a[i]);
    }
    for(i=0;i<n;i++){
        change(a[i]);
        printf("case #%d: %s\n",i,a[i]);
    }
    return 0;
}