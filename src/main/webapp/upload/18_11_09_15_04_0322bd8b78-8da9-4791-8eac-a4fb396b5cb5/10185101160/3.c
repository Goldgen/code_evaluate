#include <stdio.h>
#include <string.h> 
	char str[30];
	int i,len,x;
void turn()
{
	switch(str[i])
	{
		case 'a':case 'e':case 'i':case 'o':case 'u':
		case 'A':case 'E':case 'I':case 'O':case 'U': printf("yes"); x=1;break;
		default: x=0;break;
	}
}
int main()
{
	
	gets(str);
	len =strlen(str);
	str[len]='\0';
	for(i=0;i<len;i++)
	{
		turn();
		if(x==1)
			break;
	}
	if(x==0)
		printf("no");		
	return 0;
}
