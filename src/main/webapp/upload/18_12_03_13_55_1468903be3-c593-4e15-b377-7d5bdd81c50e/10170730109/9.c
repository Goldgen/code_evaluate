#include <stdio.h>
#include <string.h>
int count(char *str1,char *str2){
    int count=0;
    char *i,*j;
    while(*str1!='\0'){
        i=str1;
        j=str2;
        while((*i==*j)&&(*i!='\0')&&(*j!='\0')){
            i++;
            j++;
        }
        if(*j=='\0') count++;
        str1++;
    }
    return count;
}
int main(void)
{
    char str1[80],str2[80];
    gets(str1);
    gets(str2);
    if(strstr(str1,str2)!=NULL){
        char *address=strstr(str1,str2);
        printf("%s: %d time(s), first at %d",str2,count(str1,str2),address-str1);
    }
    else printf("%s: %d time(s), first at -1",str2,count(str1,str2));
    return 0;
}
