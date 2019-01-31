#include<stdio.h>
#include<string.h>

void reverse(char *ptr)
{
	int m = strlen(ptr);
	char c;
	if(m>1)
	{
		c = ptr[0];
		ptr[0] = ptr[m -1];
	ptr[m -1] = '\0';
	
	reverse(ptr+1);
	ptr[m-1] = c;
	}
}
int main()
{
	char riri[50];
	int i = 0;
	for(;riri[i] != '?';i++)
	{
		riri[i] = getchar();
		if(riri[i] == '?')
		break;
		
	}
	riri[i] = '\0';
	reverse(riri);
	printf("%s",riri);
}