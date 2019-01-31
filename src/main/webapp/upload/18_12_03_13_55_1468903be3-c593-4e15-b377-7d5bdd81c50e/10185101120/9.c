#include<stdio.h>
#include<string.h>
char s[100],t[100];
int main()
{
	int ls,lt,i=0,v=0,a=0,first=-1;
	gets (s);
	gets (t);
	ls=strlen(s);
	lt=strlen(t);
	for (;i<ls;i++){
		if (s[i]==t[0]){
			for (v=1;v<lt;v++){
				if (s[i+v]!=t[v]){
					break;
				}
			}
			if (v==lt){
				if (a==0){
					first=i;
				} 
				++a;
			}
		}
	}
	printf ("%s: %d time(s), first at %d",t,a,first);
}