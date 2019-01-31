#include <stdio.h> 
#include<string.h>             
int main() {     
	int j,i,n;     
	char a[100],b[100];     
	gets(a);      
	n=strlen(a);                
	for(i=0,j=n-1;i<n;i++,j--)    
		b[j]=a[i];     
	for(i=0;i<n;i++)     
	{         
		if(b[i]!=a[i]) 
			break;       
	}    
	if(i==n) printf("True");     
	else printf("False");     
	return 0;
}
