#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],b[1000],*p,*q;
    p=a;q=b;
    int n,i,c,j=0;
    gets(a);
    scanf("%d",&n);
    c=strlen(a);
    for(i=n;i<=c;i++,j++)
		*(q+j)=*(p+i);
	printf("%s",b);

}