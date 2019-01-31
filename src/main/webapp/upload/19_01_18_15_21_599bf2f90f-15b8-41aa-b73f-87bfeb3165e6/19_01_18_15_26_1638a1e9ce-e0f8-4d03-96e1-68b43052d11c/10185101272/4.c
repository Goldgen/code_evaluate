#include <stdio.h>
#include <stdlib.h>
int main(){
	char a;
	scanf("%c",&a);
		if(a>='A'&&a<='Z') printf("%c",a-'A'+'a');
		else printf("ERROR");
	
	
	return 0;
}