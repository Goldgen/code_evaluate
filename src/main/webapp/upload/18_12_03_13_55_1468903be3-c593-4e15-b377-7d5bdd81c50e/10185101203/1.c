#include<stdio.h>
int main()
{
	char str[80];
	scanf("%s",&str);
	
	for(int i = 0;i < 8;i++)
	{
		switch(str[i])
		{
			case 'a':case'b':case'c':
			printf("2");
			break;
			case 'e':case'd':case'f':
			printf("3");
			break;
			case 'g': case'h':case'i':
			printf("4");
			break;
			case 'j':case'k':case'l':
			printf("5");
			break;
			case 'm':case'n':case'o':
			printf("6");
			break;
			case 'p':case'q':case'r':case's':
			printf("7");
			break;
			case 't':case'u':case'v':
			printf("8");
			break;
			case 'w':case'x':case'y':case'z':
			printf("9");
			break;default:break;
		}
	}	
}