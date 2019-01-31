#include <stdio.h>
int main()
{
	char a=0;
	int b=0;
    a=getchar();
    while(a!=EOF)
    {
    	switch(a)
    	{
		case 'a':case 'e':case 'i':case 'o':case'u':
            b++;
    		break;
    	default:
		break;
	    }
	    a=getchar();
	}
	if(b==0)
	printf("no");
	else
	printf("yes");
    return 0;
} 