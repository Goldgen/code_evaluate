#include <stdio.h>
#include <ctype.h>

void out(int i)
{
	int length=0,j;
	j=i;
	while(j>0)
	{
		length++;
		j=j/10;
	}
	length=8-length;
	printf("%d",i);
	while(length>0)
	{
		printf(" ");
		length--;
	} 
	printf("%c",i);
}

int main()
{
	int start,end,mark=0;
	scanf("%d %d",&start,&end);
	while(start<=end)
	{
		int useful_parentheses;
		useful_parentheses = isgraph(start);
		if(useful_parentheses)
		{
			if(mark>0)
				printf("\n");
			out(start);
			mark++;
		}
		start++;
	}
	if(mark==0)
		printf("NONE");
	return 0;
}