#include <stdio.h>
#include <stdlib.h>


void main()
{
	char c;
	scanf("%c",&c);
	if ((c>='A')&&(c<='Z'))
	{
        c+=32;
		printf("%c",c);
	}
	
	else
	{
	    printf("ERROR");
	}
	
    return 0;
}