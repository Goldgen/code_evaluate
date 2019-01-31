#include<stdio.h>
#include<string.h>
int main()
{
	char str[81],max[81],min[81];
	int i=0,j=0,k=0,len=0,len1=0,len2=0;
	gets(str);
	len = strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]==' ')
			break;
		else
			max[i] = str[i];		
	}//???????max????

	for(k=i;k<len;k++)//??????????
	{
		while (str[k] == ' ')//????
			++k;
		for(i=k;i<len;i++)
		{
			if(str[i] == ' ')
				break;
			else
			{
				min[j] = str[i];//????
				j++;
			}	
		}
		len1 = strlen(max);
		len2 = strlen(min);
		if(len1<len2)
			strcpy(max,min);//??????
		j=0;
	}
	puts(max);//??????
	return 0;
}
