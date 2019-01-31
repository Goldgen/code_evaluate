#include<stdio.h>
void num(int st,int ed)
{
    int n,i;
	if(st>=32&&st<=126||ed>=32&&ed<=126)
	{  for(n=st;n<=ed;n++)
        {
		  printf("%-3d",n);
		  for(i=1;i<=5;i++)
		  { printf(" "); }
		  printf("%c\n",n);
        }
	}
    else
        printf("NONE");
}
int main()
{
    int st,ed;
    scanf("%d %d",&st,&ed);
    num(st,ed);
    return 0;
}

