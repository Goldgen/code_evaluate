#include<stdio.h>
int main()
{
    char c;
    int i,a=0;
	for(i=1;i<=100;i++)
	{scanf("%c",&c);
	if(c>='A'&&c<='z')
	{if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    a+=1;}}
    if(a>=1)
    printf("yes");
    if(a==0)
    printf("no");
    return 0;
}