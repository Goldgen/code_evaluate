#include <stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include <time.h>
#include<math.h>
#include<string.h>



int main( ){
    char s1[90],s2[90];
    scanf("%s %s",s1,s2);int ret=0;
    char s[strlen(s1)][90];
    for(int i=0;i<strlen(s1);i++){
        s[i][0]=0;
        strncat(s[i],s1+i,strlen(s1)-i);

        strncat(s[i],s1,i);


        if(strcmp(s[i],s2)==0){
            ret=1;
            break;
        }
    }
    if(ret==0&&strcmp(s1,s2))printf("\"%s\" is NOT a rotation of \"%s\"\n",s1,s2);
    else printf("\"%s\" is a rotation of \"%s\"\n",s1,s2);

    return 0;
}


