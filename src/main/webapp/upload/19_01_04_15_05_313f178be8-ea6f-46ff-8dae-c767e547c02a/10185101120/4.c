#include<stdio.h>
int main()
{
	char str[101];
	int a[100][2]={0},v;
	gets(str);
	for(int i=0;str[i]!='\0';i++){
		if(str[i]==' '){
			continue;
		}
		int f=1;
		for(v=0;a[v][0];v++){
			if(a[v][0]==str[i]){
				a[v][1]++;
				f=0;
			}
		}
		if(f){
			a[v][0]=str[i];
			a[v][1]=1;
		}
	}
	for(int i=0;a[i][0];i++){
		printf("%c %d; ",a[i][0],a[i][1]);
	}
}