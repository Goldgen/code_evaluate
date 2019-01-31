#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int g,p;
	scanf("%d",&g);
	getchar();
	for(p=0;p<g;p++){
		char a[200][200]={0},temp[200]={0},k;
		int v,n,f=0,w=-1;
		while((k=getchar())!='\n'){
			w++;
			if(k==' '){
				f++;
				w=-1;
				continue;
			}
			a[f][w]=k;
		}
		n=f+1;
		printf("case #%d:\n",p);
		for(int i=0;i<n-1;i++){
			for(v=0;v<strlen(a[i]);v++){
				if(a[i][v]<'A'||a[i][v]>'Z'){
					break;
				}
			}
			if(v==strlen(a[i])){
				for(int x=i+1;x<n;x++){
					int l=strlen(a[x]);
					for(v=0;v<l;v++){
						if(a[x][v]<'A'||a[x][v]>'Z'){
							break;
						}
					}
					if(v==l){
						if(strcmp(a[i],a[x])>0){
							strcpy(temp,a[i]);
							strcpy(a[i],a[x]);
							strcpy(a[x],temp);
						}
					}
				}
			}
			printf("%s ",a[i]);
		}
		printf("%s\n",a[n-1]);
	}
}