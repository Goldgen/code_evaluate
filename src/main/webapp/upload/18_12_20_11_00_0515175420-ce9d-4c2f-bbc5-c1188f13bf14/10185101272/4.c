#include<stdio.h>
#include<stdlib.h>
void _get(){
	char a;
	a=getchar();
	if(a!='?') {
		_get();
		printf("%c",a);
	}
}
int main(){
	_get();
	return 0;
} 