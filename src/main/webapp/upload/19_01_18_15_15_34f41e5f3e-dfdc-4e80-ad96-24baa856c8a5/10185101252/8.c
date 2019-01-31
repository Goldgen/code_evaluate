#include <stdio.h>
#include <string.h>
char num1[100];
int num2, len;
int main(int argc, char* argv[]){

	scanf("%s%d", num1, &num2);
	len = strlen(num1);
	printf("%d ", len);
	num2 %= len;
	for(int i = len - num2; i < len; i++)
		printf("%c", num1[i]);
	for(int i = 0; i < len - num2; i++)
		printf("%c", num1[i]);

}