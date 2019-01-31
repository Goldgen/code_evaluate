#include <stdio.h>
#include <string.h>
int main(){
	char a[11][31]={0};
	int n;
	scanf("%d",&n);
	getchar();
    for(int i=0;i<n;i++){
    	gets(a[i]);
		}
	for(int i=n-1;i>0;i--){
		for(int j=0;j<i;j++){
			for(int k=0;;k++){
				if(a[j][k]>a[i][k]){
					char temp[31]={0};
				    strcpy(temp,a[j]);
			 	    strcpy(a[j],a[i]);
				    strcpy(a[i],temp);
				    break;
				}
				else if(a[j][k]==a[i][k]){
					continue;
			    }
				else 
				    break;
				}
		}
	}
	printf("%s",a[n-1]);
	for(int i=n-2;i>=0;i--){
		printf("\n%s",a[i]);
	}
	return 0;
}