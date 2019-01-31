#include<stdio.h>
#include<string.h>
void reverse_char(char *str)
{
	int len = strlen(str);
	if(len > 1)
	{
		char t = str[0];
		str[0] = str[len-1];
		str[len-1] = '\0';
		reverse_char(str+1);
		str[len-1] = t;
	}
}
int main()
{
	char ddd[35];
	int i=0;
	for(;ddd[i]!='?';i++)
	{
	    ddd[i]=getchar();
	    if(ddd[i]=='?')
            break;
	}
    ddd[i]='\0';
	reverse_char(ddd);
	printf("%s",ddd);
	return 0;
}
