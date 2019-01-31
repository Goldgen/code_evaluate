#include <stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include <time.h>
#include<math.h>
#include<string.h>


int main( ){
    char s[100];
    gets(s);
    char s_find[90];
    scanf("%s",s_find);
    //printf("s=%s\ns_find=%s\n",s,s_find);
    int cnt;
    int loc;
    char *p=strstr(s,s_find);//;printf("p=%s\n",p);
    if(p==NULL)printf("%s: 0 time(s), first at -1",s_find);
    else{

            loc=strlen(s)-strlen(p);
        for(cnt=1;;cnt++){
            p=strstr(++p,s_find);
            //printf("p=%s\n",p);
            if(p==NULL){

                break;
            }
        }
        printf("%s: %d time(s), first at %d",s_find,cnt,loc);
    }
    return 0;
}

