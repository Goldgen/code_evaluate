#include <stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include <time.h>
#include<math.h>
#include<string.h>


int main( ){
    char s[100];
    gets(s);
    int left=0;
    int right=strlen(s)-1;
    int ret=0;
    while(left!=right&&left<right){
        if(s[left++]!=s[right--]){
            ret=1;
            break;
        }
    }
    if(ret==1)printf("False");
    else printf("True");
    return 0;
}

