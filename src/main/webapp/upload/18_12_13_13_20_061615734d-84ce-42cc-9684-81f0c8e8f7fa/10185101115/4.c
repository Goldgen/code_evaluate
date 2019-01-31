#include <stdio.h>
#include <string.h>

void rotate(int*,int,int);

int main()
{
	int t;
	scanf("%d",&t);
	char arr[t][51];
	for(int i=0;i<t;i++){
		scanf("%s",&arr[i]);
	} 
	
	
	char brr[t][51];
	for(int i=0;i<t;i++){
		for(int j=0;j<51;j++){
		if(*(arr[i]+j)=='Z'){
			*(brr[i]+j)='A';
		}
		else{
			*(brr[i]+j)=(char)((int)*(arr[i]+j)+1);
		}
		if(*(arr[i]+j)=='\0'){
			*(brr[i]+j)='\0';
		} 
		}
		
	}
	
	
	for(int i=0;i<t;i++){
		if(i==(t-1)){
			printf("case #%d: %s",i,brr[i]);
		}
		else{
			printf("case #%d: %s\n",i,brr[i]);
		}     
	}	
	return 0;
}
	