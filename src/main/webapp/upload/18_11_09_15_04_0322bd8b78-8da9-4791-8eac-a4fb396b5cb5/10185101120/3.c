#include<stdio.h>
int main()
{
	int b=0;
	char a;
	do
	{
		a=getchar();
		if (a=='a'||a=='i'||a=='o'||a=='e'||a=='u'||a=='A'||a=='I'||a=='O'||a=='E'||a=='U')
		{
			b=1;
		}
	}
	while ( a != EOF );
	if(b==0)
	{
		printf ("no");
	}
	else
	{
		printf ("yes");
	}
}