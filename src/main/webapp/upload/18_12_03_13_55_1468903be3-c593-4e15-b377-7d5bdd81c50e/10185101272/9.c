#include<stdio.h>
#include<string.h>

int main(){
	char s[100]={},a[100]={};
	int i,ls,la,j,sum=0,f=-1;
	fgets(s,100,stdin);
	scanf("%s",a);
	ls=strlen(s);
	la=strlen(a);
	for(i=0;i<ls-la;i++){
		if(s[i]==a[0])
		for(j=0;j<la;j++)
			if(s[i+j]!=a[j]) break;
		if(j==la) sum++;
		if(j==la&&f==-1) f=i;
		j=0;
	}
	printf("%s: %d time(s), first at %d",a,sum,f);
	return 0;
} 