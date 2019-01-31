#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char s[80],a[80][80];
	int i,l,v=0,x=0,max=0,put;
    gets(s);
    l=strlen(s);
    for(i=0;i<l;i++,v++){
		if(isalpha(s[i])){
			if(v==0)
			    x++;
			a[x][v]=s[i];
	    }
	    else{
	    	v=-1;
	    }
	}
	for (i=1;i<=x;i++){
		l=strlen(a[i]);
		if (l>max){
			max=l;
			put=i;
		}
	}
	puts(a[put]);
}