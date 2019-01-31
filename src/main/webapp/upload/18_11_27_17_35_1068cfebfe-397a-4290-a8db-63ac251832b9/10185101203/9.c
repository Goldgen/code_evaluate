#include<stdio.h>
#include<string.h>
#define N 400
int main(void)
{
	char s1[100],s2[100],*s=s1;
	int R[N],cp=0;
    gets(s1);
	gets(s2);

	int i=strlen(s1)-1;
	int j=strlen(s2)-1;
	int k=N-1;
	while(i>-1&&j>-1)
	{

		int x=s1[i--]-'0'+s2[j--]-'0'+cp;
		R[k--]=x%10;
		cp=x/10;
	}
	if(j>-1)
	{
		i=j;
		s=s2;
	}
	while(i>-1)

	{
		int x=s[i--]-'0'+cp;
		R[k--]=x%10;
		cp=x/10;
	}
	if(cp)
		R[k--]=cp;

	for(i=k+1;i<N;i++)
		printf("%d",R[i]);
	printf("\n");
	return 0;
}
