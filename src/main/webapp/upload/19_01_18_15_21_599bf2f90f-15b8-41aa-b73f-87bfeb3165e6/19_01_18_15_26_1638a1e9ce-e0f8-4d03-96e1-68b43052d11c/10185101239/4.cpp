#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a1;
    scanf("%c",&a1);
    if((a1>='A')&&(a1<='Z'))
	{
		a1=a1+32;
		printf("%c",a1);
	}
    else
        printf ("ERROR");
return 0;
}
  
