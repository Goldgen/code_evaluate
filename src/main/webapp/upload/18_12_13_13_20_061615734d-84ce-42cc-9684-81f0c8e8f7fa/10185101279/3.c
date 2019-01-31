#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<assert.h>
void convert(int n);
int main()
{
   int n;
   scanf("%d",&n);
   convert(n);
	return 0;
}
void convert(int n){
    int i;
if((i=n/10)!=0)
    convert(i);
putchar(n%10+'0');
}


