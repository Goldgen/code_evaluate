#include<stdio.h>
int main()
{
	int b=0;
	char a;
	while(1)
	{
		scanf("%c",&a);
		if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
		{
			printf("yes");
			b=1;
			break;
		}
		b++;
		if(b==20)
		break;
		


	}
	if(b!=1)
	printf("no");
	return 0;
 } 