#include<stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	if (a<97||a>122)
	{
		printf("ERROR");
	}
	else 
	{
		switch (a)
		{
			case 97:;
			case 101:;
			case 105:;
			case 111:;
			case 117:printf ("vowel");break;
			case 98:;
			case 99:;
			case 100:;
			case 102:;
			case 103:;
			case 104:;
			case 106:;
			case 107:;
			case 108:;
			case 109:;
			case 110:;
			case 112:;
			case 113:;
			case 114:;
			case 115:;
			case 116:;
			case 118:;
			case 119:;
			case 120:;
			case 121:;
			case 122: printf("consonant");break;
			default :break;
		}
	}
	return 0; 
}