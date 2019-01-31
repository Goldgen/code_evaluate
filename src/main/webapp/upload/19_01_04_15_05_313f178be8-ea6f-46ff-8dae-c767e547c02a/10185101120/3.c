#include<stdio.h>
#include<string.h>
int main()
{
	char a[1001],b[1001];
	scanf("%s",&a);
	while(a[0]!='#'){
		int f=0,v;
		scanf("%s",&b);
		for(int i=0;i<strlen(a);i++){
			for(v=0;v<strlen(b);v++){
				if(a[i+v]!=b[v]){
					break;
				}
			}
			if(v==strlen(b)){
				f++;
				i=i+v-1;
			}
		}
		printf("%d\n",f);
		scanf("%s",&a);
	}
}