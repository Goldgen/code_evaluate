#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int i,a,f=0,st,ed;
	scanf("%d%d",&st,&ed);
    for(i=st;i<=ed;i++){
		a=isgraph(i);
		if(f*a!=0){printf("\n");f=1;}
        if(a!=0){ 
            if(i<100)printf("%d      %c",i,i);
            else printf("%d     %c",i,i);
            f=1; 
            } 
    }
	if(f==0)printf("NONE");
    return 0;
}
