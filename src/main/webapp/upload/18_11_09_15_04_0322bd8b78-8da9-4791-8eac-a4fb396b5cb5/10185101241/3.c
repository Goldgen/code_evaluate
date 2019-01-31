#include<stdio.h>

int main()
{
	char c;
	c=getchar();
	while((c!='a')||(c!='A')||(c!='e')||(c!='E')||(c!='i')||(c!='I')||(c!='o')||(c!='O')||(c!='u')||(c!='U')||c!='\n')
	{
		c=getchar();
	}
	if(c=='\n') printf("no");
	else printf("yes");
	return 0;
}