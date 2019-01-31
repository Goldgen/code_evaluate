#include<stdio.h>
#include<string.h>

int main(){
	char str[50][100]={};
	int nu[50]={};
	int n,i,j,c;
	scanf("%d ",&n);
	for(i=0;i<n;i++){
		fgets(str[i],100,stdin);
		nu[i]=i;
		str[i][strlen(str[i])-1]='\0';
	}
		
	for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
		if(strcmp(str[nu[i]],str[nu[j]])<0){
			c=nu[i];
			nu[i]=nu[j];
			nu[j]=c;
		}
		
	for(i=0;i<n;i++)
		printf("%s\n",str[nu[i]]);
	return 0;
} 