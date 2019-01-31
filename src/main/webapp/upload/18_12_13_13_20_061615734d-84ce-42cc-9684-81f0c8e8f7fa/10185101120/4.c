#include<stdio.h>
#include<string.h>
char x[]="ABCDEFGHIJKLMNOPQRSTUVWXYZA";
int main()
{
	int N,i=0,l;
	char s[10][55];
	scanf ("%d",&N);
	while(N--){
		scanf("%s",s[i]);
		l=strlen(s[i]);
		for(int v=0;v<l;v++){
			s[i][v]=x[s[i][v]-64];
		}
		i++;
	}
	printf ("case #0: %s",s[0]);
	for(int v=1;v<i;v++){
		printf ("\ncase #%d: %s",v,s[v]);
	}
}