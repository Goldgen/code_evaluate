#include<stdio.h>
#include<string.h>

int main(){
	char s1[100]={},s2[100]={};
	int i,j,l1,l2,k;
	scanf("%s %s",s1,s2);
	l1=strlen(s1);
	l2=strlen(s2);
	if(l1!=l2){
		printf("\"%s\" is NOT a rotation of \"%s\"",s1,s2);
		return 0;
	} 
	for(i=0;i<l1;i++)
	for(j=0;j<l1;j++){
		k=0;
		if(s1[i]==s2[j])
			while(k<l1)
				if(s1[(i+k)%l1]==s2[(j+k)%l1]) k++;
				else break;
		if(k==l1){
			printf("\"%s\" is a rotation of \"%s\"",s1,s2);
			return 0;
		} 

	}
	printf("\"%s\" is NOT a rotation of \"%s\"",s1,s2);

	return 0;
} 