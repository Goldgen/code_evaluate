#include<stdio.h>
#include<string.h>
int main()
{
 char s1[81];
 char s2[81];
 char s[81];
 char c;
 int len1,len2;
 int i,j;
 scanf("%s%s",s1,s2);
 strcpy(s,s1);
 len1 = strlen(s1);
 len2 = strlen(s2);
 if(len1 > len2)
 	printf("\"%s\" is NOT a rotation of \"%s\"",s,s2);
 else if(len1 < len2)
 	printf("\"%s\" is NOT a rotation of \"%s\"",s,s2);
else
{
	for(i=0;i<len1;i++)
 	{
 		c = s1[0];
 		for(j=0;j<len1-1;j++)
 			s1[j] = s1[j+1];
 		s1[len1-1]= c;
  		if(strcmp(s1,s2)==0)
   		{
   			printf("\"%s\" is a rotation of \"%s\"",s,s2);
   			return 0;
		}
 	}
 	printf("\"%s\" is NOT a rotation of \"%s\"",s,s2);
}
 return 0;
}