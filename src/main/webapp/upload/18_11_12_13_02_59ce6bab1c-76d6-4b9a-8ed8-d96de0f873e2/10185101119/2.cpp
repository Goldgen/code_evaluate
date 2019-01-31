#include <stdio.h>
#include <ctype.h>
int main(){
	char a=0,b=0,c=0;
	scanf("%d %d",&a,&b);
	for(int i=a;i<=b;i++){
		int are=isgraph(i);
		if(i<10&&are)
		{
		c++;
		printf("%d       %c",i,i);
	    }
		if(i>=10&&i<100&&are)
		{
		printf("%d      %c",i,i);
		c++;
		}
		if(i>=100&&are)
		{
		c++;
		printf("%d     %c",i,i);
		}
		if(i!=b&&are&&c!=0)
		printf("\n");
	}
    if(c==0)
    printf("NONE");
	return 0;
}