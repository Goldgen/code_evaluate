#include<stdio.h>
#include<string.h>
int main()
{
	char str1[81],str2[81];
	int len1,len2,i=0,j=0;
	while(1)
  	{
		str1[i]=getchar();
		if(str1[i] == ' ')
			break;
  		i++;
  	}
  	str1[i]='\0';
  	len1 = i;
  	gets(str2);
  	len2 = strlen(str2);
	if(len1>len2)
	{
		for(j=0;j<len2;j++)
			printf("%c%c",str1[j],str2[j]);
		for(j=len2;j<len1;j++)
			printf("%c",str1[j]);
	} 
	else
	{
		for(j=0;j<len1;j++)
			printf("%c%c",str1[j],str2[j]);
		for(j=len1;j<len2;j++)
			printf("%c",str2[j]);
	}
	return 0;	
}
