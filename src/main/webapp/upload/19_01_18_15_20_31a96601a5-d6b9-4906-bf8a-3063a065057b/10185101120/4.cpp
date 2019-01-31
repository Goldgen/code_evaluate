#include<stdio.h>
#include<ctype.h>
int main()
{
	char a;
	scanf ("%c",&a);
	if (a<65||a>90)
	{
		printf ("ERROR");
	}
	else 
	{
		a=tolower(a);
		printf ("%c",a);
	}
	return 0;
}