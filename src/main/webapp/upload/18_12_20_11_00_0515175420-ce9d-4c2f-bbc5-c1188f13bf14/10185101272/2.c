#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void Swap(char *a,char *b){
	char str[205];
	strcpy(str,a);
	strcpy(a,b);
	strcpy(b,str);
}
char wrd[205][205];
void Sort(int *pst,int n){
	int i,j,k;
	for(i=0;i<n-1;i++){
		if(!pst[i]){
		k=i;
		for(j=i+1;j<n;j++)
		if(!pst[j]&&strcmp(wrd[k],wrd[j])>0) k=j;
		Swap(wrd[k],wrd[i]);
		}
	}
}
int Get(int *pst){
	char str[205];
	fgets(str,205,stdin);
	int i,n,k,l=strlen(str);
	for(i=0,n=0,k=0;i<l;i++){
		if(str[i]!=' '&&str[i]!='\n'){
			wrd[n][k]=str[i];
			if(str[i]<'A'||str[i]>'Z') pst[n]=1;
			k++;
		}			
		else
			wrd[n][k]='\0',n++,k=0;
	}
	return n;
}
void OutPut(int n){
	int i;
	for(i=0;i<n;i++){
		printf("%s",wrd[i]);
		if(i<n-1) printf(" ");
		else printf("\n");
	}
}
void solve(){
	int pst[205]={},n;
	n=Get(&pst);
	Sort(&pst,n);
	OutPut(n);
}
int main(){ 	
	int t,i;
	scanf("%d",&t);
	getchar();
	for(i=0;i<t;i++){
		printf("case #%d:\n",i);
		solve();
	}
	return 0;
}