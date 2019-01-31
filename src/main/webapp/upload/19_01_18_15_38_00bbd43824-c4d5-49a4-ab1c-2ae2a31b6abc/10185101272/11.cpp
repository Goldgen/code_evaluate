#include<stdio.h>
#include<stdlib.h>
int main(){
	char a;
	scanf("%c",&a);
		if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
			printf("vowel");
		else if(a>='a'&&a<='z')
			printf("consonant");
		else printf("ERROR");
	
	return 0;
} 