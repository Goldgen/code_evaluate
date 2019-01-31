#include<stdio.h>
#include<ctype.h>
int main()
{
	int a,b,c=1;
	scanf ("%d %d",&a,&b);
	for (;a<=b;a++){
		if (isgraph(a)){
			c=0;
			printf ("%-8d%c",a,a);
			if (a<b&&a<126){
				printf ("\n");
			}
		}
	}
	if (c){
		printf ("NONE");
	}
}