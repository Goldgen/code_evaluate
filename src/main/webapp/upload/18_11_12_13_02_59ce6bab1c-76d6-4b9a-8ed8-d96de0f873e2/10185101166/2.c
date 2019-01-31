#include<stdio.h>
#include<ctype.h>
int main()
{

	int st,ed,a = 0;
	scanf("%d %d",&st,&ed);
	
	for(int i = st;i <= ed;i++)
	{
		if(isgraph(i))
		{
			printf("%-8d%c",i,i);
			a = 1;
			
			if(i < ed)
		{
			printf("\n");
		}
		}
		
	}
	if(a==0)
	printf("NONE");
}