#include<stdio.h>
int main()
{
	char arr[80],a;
	for(int i=0;i<80;i++)
	{
		a=getchar();
		
		arr[i]=a;
		if(a=='\n')
		break;	}
	
			for(int i=0;i<80;i++)
	{
	
			switch(arr[i])
			{
				case 'a':case 'b':case 'c':printf("2");break;
				case 'd':case 'e':case 'f':printf("3");break;
				case 'g':case 'h':case 'i':printf("4");break;
				case 'j':case 'k':case 'l':printf("5");break;
				case 'n':case 'm':case 'o':printf("6");break;
				case 'p':case 'q':case 'r':case 's':printf("7");break;
				case 'u':case 'v':case 't':printf("8");break;
				case 'x':case 'y':case 'z':case 'w':printf("9");break;
				default: break;
			}
		
		
	}
	return 0;
}