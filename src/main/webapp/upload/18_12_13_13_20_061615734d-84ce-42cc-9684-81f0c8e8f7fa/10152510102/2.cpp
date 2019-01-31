#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
char* strmcpy(char *dest,const char *str,int n)
{
	int i;
	for (i = 0; n<=strlen(str); i++)
	{
		*(dest + i) = *(str + n); 
		n++;
	}
	return dest;
}
int main() {
	char s1[80],s2[80];
	gets(s1);
	int n;
	cin>>n;
	puts(strmcpy(s2,s1,n));
    return 0;
}