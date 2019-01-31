#include<stdio.h>
#include<string.h>
char s1[300],s2[500];
int main()
{
	int len1,len2;
	scanf("%s %s",s1,s2);
	len1 = strlen(s1);
	len2 = strlen(s2);
	if(len1 != len2) 
	{
		printf("\"%s\" is NOT a rotation of \"%s\"\n",s1,s2);
		return 0; 
	}

	strncpy(s2+len2,s2,len2);
	int flag = 0;

	for (int i = 0 ; i < len2 ; ++i)
	{
		char c = s2[len1+i];
		s2[len1+i] = 0;
		if(strcmp(s2+i,s1) == 0)
		{
			flag = 1;
			break;
		}
		s2[len1+i] = c;
	}
	

	s2[len2] = 0;
	if(flag == 1)
		printf("\"%s\" is a rotation of \"%s\"\n",s1,s2);
	else
		printf("\"%s\" is NOT a rotation of \"%s\"\n",s1,s2);

	return 0;

	
 } 