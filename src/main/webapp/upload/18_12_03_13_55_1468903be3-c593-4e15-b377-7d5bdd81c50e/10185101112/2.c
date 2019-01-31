#include <stdio.h>
#include <string.h>

int main(){
	int t;
    scanf("%d\n",&t);
    char ch[t+1][35];
    char temp[1][35];
    for (int i=0;i<t;i++)
    {
    	gets(ch[i]);
	}
	//???? 
	for (int k=0;k<t-1;k++)
	{
		for (int j=0;j<t-k-1;j++)
		{
			if (strcmp(ch[j],ch[j+1])<0)
			{
				strcpy(temp[1],ch[j]);
				strcpy(ch[j],ch[j+1]);
				strcpy(ch[j+1],temp[1]);
			}
		}
		
	}
	for (int i=0;i<t;i++)
	{
	    puts(ch[i]);
	}

	return 0;
} 