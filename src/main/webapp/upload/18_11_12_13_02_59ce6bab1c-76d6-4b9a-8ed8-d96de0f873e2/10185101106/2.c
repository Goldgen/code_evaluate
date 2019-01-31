#include<stdio.h>
#include<ctype.h>
void add()
{	
	int st,ed,a,b,c=0;
	scanf("%d %d",&st,&ed); 
	a=st;
	do
	{	b=isgraph(st);
		if(b)
	{	
		if(st>=100) 
			printf("%d     %c",st,st);
		else if(st>=10) 
			printf("%d      %c",st,st);
		else 
			printf("%d       %c",st,st);
			
		if(st != ed&&st != 126)
			printf("\n");
	}
	else
		{c++;
	}
	st++;
	if(c==ed-a+1)
	{
		printf("NONE");
		break;
	}
}while(st<=ed);	
}
int main()
{
	add();
	return 0;
}
	