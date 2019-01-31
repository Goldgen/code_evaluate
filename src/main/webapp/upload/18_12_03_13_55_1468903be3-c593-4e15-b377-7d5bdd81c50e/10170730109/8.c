#include <stdio.h>
#include <string.h>
int main(void)
{
    char str1[80],str2[80];
    int i=0;
    gets(str1);
    str2[strlen(str1)]='\0';
    for(i=0;i<strlen(str1);i++){
        str2[strlen(str1)-1-i]=str1[i];
    }
    
    if(strcmp(str1,str2)==0) printf("True");
    else printf("False");
    return 0;
}
