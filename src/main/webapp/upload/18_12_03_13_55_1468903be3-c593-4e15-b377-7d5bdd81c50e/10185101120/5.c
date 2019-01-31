#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	scanf ("%s %s",&a,&b);
	int la,lb,i,v;
	la=strlen(a);
	lb=strlen(b);
	if (la==lb){
		for (i=0;i<la;i++){
			for (v=0;v<lb;v++){
				if (i+v<la){
					if(b[v]!=a[v+i]){
						break;
					}
				}
				else {
					if(b[v]!=a[v+i-la]){
						break;
					}
				}
			}
			if(v==lb){
				printf ("\"%s\" is a rotation of \"%s\"",a,b);
				break;
			}
		}
	}
	if (la!=lb||i==la)
		printf ("\"%s\" is NOT a rotation of \"%s\"",a,b);
}