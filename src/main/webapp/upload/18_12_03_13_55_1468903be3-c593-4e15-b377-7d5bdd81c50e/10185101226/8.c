#include <stdio.h>
#include <string.h>
int main()
{
	char a[81],b[81]={0};
int n;
gets(a);
for(int i=0;i<81;i++)
if(a[i]=='\0')
{
	n=i;
	break;
}
for(int j=0;j<n;j++)
{
	b[j]=a[n-1-j];
}
if(strcmp(b,a)==0)
    printf("True");
else printf("False");
return 0;
}