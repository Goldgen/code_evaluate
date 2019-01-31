#include<stdio.h>
#include<string.h>
int main()
{
	char s1[80],s2[80];
	int i=0,ls1,ls2,l;
    scanf ("%s %s",&s1,&s2);
    ls1=strlen(s1);
    ls2=strlen(s2);
    l=(ls1>ls2)?ls1:ls2;
    for (i=0;i<l;i++){
    	if(i<ls1)
    	    putchar (s1[i]);
    	if(i<ls2)
    	    putchar (s2[i]);
	}
}