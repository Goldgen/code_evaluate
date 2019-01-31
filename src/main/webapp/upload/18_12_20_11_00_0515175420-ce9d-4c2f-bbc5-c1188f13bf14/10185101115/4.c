#include<stdio.h>
#include<string.h>

int main()
{
	int i=0;
	char arr[101],*m=arr;
	do{
		scanf("%c",m+(i++));
	}while(*(m+i-1)!='?');
	int n=strlen(arr);
	char brr[n];
	char *a,*b;
	a=m+i-2;
    b=brr;
    for(int v=0;v<n-1;v++){
    	*b++=*a--;
	}
	*b='\0';
	printf("%s",brr);
 } 