#include<stdio.h>

int main()
{
	char a[101],b[101];
	char ch;
	int c[101];
	int tmp;
	int i,j;

	i=0;
	while(scanf("%c",&ch),ch!='\n'){
		a[i]=ch;
		++i;
	}

	for(j=100;j>100-i;--j){
		a[j]=a[i-1-(100-j)];
	}
	for(j=100-i;j>=0;--j){
		a[j]='0';
	}


	i=0;
	while(scanf("%c",&ch),ch!='\n'){
		b[i]=ch;
		++i;
	}
	for(j=100;j>100-i;--j){
		b[j]=b[i-1-(100-j)];
	}
	for(j=100-i;j>=0;--j){
		b[j]='0';
	}

	
	int flag=0;
	for(i=100;i>=0;--i){
		c[i]=(a[i]-'0')+(b[i]-'0')+flag;
		if(c[i]>9)c[i]-=10,flag=1;
		else flag=0;
	}


	for(i=0;i<=100;++i){
		if(c[i]!=0)break;
	}
	if(i>100)printf("0");
	else{
		for(j=i;j<=100;++j)printf("%d",c[j]);
	}

	return 0;
}