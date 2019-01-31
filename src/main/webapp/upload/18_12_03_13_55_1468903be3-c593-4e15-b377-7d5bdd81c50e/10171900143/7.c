#include <stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include <time.h>
#include<math.h>
#include<string.h>

void LongestWord(char*,char*);

int main( ){
    char str[90];
    gets(str);
    char s[90];
    LongestWord(str,s);
    return 0;
}
void LongestWord(char* str,char* s){
    char *p;
    for(int i=0;;i++){
        if(str[i]=='\t')str[i]=' ';
        if(str[i]==0)break;
    }
    //printf("str=%s\n",str);
    s=strtok(str," ");
    //printf("s=%s\n",s);
    p=s;
    while (1){
        //printf("done!");
        p=strtok(NULL," ");
        //printf("p=%s\n",p);
        if(!p)break;
        //printf("strlen(s)=%d\nstrlen(p)=%d\n",strlen(s),strlen(p));
        if(strlen(s)<strlen(p))
			s=p;
//printf("s=%s\n",s);
    }
    printf("%s\n",s);

}
