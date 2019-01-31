#include<stdio.h>
#include<string.h>
#define SIZE 81

int i,j;
int main()
{
 char s1[SIZE],s2[SIZE],s[SIZE];
 char c;
 int len1,len2;
 scanf("%s %s",s1,s2);
 strcpy(s,s2);
 len1 = strlen(s1);
 len2 = strlen(s2);
 if((len1 > len2)||(len1 < len2))
 	printf("\"%s\" is NOT a rotation of \"%s\"",s1,s);
else
{
	for(i=0;i<len1;i++)
 	{
 		c = s2[len2-1];
 		for(j=len2-1;j>0;j--)
 			s2[j] = s2[j-1];
 		s2[0]= c;
  		if(strcmp(s1,s2)==0)
   		{
			printf("\"%s\" is a rotation of \"%s\"",s1,s);
   			return 0;
		}
 	}
 	printf("\"%s\" is NOT a rotation of \"%s\"",s1,s);
}
 return 0;
}