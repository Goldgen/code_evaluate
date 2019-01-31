#include <stdio.h>

char c;

int main(){
	
	scanf("%c", &c);
	if(c > 'z' || c < 'a'){
		printf("ERROR");
		return 0;
	}
	switch(c){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("vowel");
			break;
		default:
			printf("consonant");
			break;
	} 
	
	
	return 0;
}