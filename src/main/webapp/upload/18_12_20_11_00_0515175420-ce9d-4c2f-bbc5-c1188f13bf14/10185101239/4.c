#include <stdio.h>
#include <stdlib.h>
int main()
{
    char num[10000],a[10000];
    char *spr=num;
	char *s=a;
    gets(num);
    int i,k,b;
    for(i=0;*(spr+i)!='?';i++){
			*(s+i)=*(spr+i);
			b=i;
	}
	 for(k=b;k>=0;k--){
                printf("%c",*(s+k));
	 }
    return 0;
}
