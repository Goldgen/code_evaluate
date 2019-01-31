#include<stdio.h>
#include<ctype.h>
void ASCII(int st,int ed)//?????? 
{
	int i=0/*????*/,x=0/*??????*/;
	for(i = st; i <= ed; i++)//??????? 	
		if(isgraph(i))
			x++; 
	if(x==0)//??? 
		printf("NONE");
	else//???? 
	{
		for(i = st; i <= ed; i++)
		{
			if(isgraph(i))	//?? 
				printf("%-3d     %c\n",i,i);
		}	
	}
} 
int main()
{
	int st,ed;
	scanf("%d%d",&st,&ed);
	ASCII(st,ed);//???????? 
	return 0;
}