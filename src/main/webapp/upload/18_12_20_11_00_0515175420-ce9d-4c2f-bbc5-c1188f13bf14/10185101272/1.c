#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char** Input(int n){
	static char *a[100];
	int i;
	for(i=0;i<n;i++)
		a[i]=(char *)malloc(60*sizeof(char));
	for(i=0;i<n;i++){
		fgets(a[i],60,stdin);
		a[i][strlen(a[i])-1]='\0';
	}
	return a;
}
void Free(char**a, int n){
	int i=0;
	for(i=0;i<n;i++){
		free(a[i]);
		a[i]=NULL;
	}
}
void Sort(char **a, int n){
	int i,j,k;
	char str[60];
	for(i=0;i<n;i++){
		memset(str,0,50);
		k=i;
		for(j=i+1;j<n;j++){
		if(strcmp(a[k],a[j])>0)  k=j;
		}
		strcpy(str,a[i]);
		strcpy(a[i],a[k]);
		strcpy(a[k],str);
	}
}

int main()
{ 	char** p; 
	int n,i;  
	scanf("%d",&n);  
	getchar();
  p = Input(n);
  Sort(p,n);
   for(i=0; i<n; i++) printf("%s\n",p[i]); 
  Free(p,n);
   return 0;
}