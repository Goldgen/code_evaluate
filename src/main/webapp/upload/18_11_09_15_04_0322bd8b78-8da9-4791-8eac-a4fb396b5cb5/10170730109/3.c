#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char n;
	scanf("%c",&n);
    for(;n!=EOF;){
        n=tolower(n)
        if(n=='a')||(n=='e')||(n=='i')||(n=='o')||(n=='u')){
           printf("yes");
           break;
		   	scanf("%c",&n);
           }
    }
    if(n!==EOF){
        printf("no");
    }
    return 0;
