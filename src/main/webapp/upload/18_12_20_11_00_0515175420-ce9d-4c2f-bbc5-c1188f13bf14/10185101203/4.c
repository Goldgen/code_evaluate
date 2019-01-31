#include<stdio.h>
#include<string.h>

void reverse_string(char *string)
{
	int len = strlen(string);
	if(len <= 1)
		return ;
	else
	{
		char temp = string[0];
		string[0] = string[len-1];
		string[len-1] = '\0';
		reverse_string(string+1);
		string[len-1] = temp;
	}
}

int main()
{
	char ch[100];
	int wei=0;
	while(1)
    {
        ch[wei]=getchar();
        if(ch[wei]=='?')
            break;
        else
            wei++;
    }
    ch[wei]='\0';
	reverse_string(ch);
	printf("%s",ch);
	return 0;
}