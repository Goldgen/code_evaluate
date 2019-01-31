#include <stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include <time.h>
#include<math.h>
#include<string.h>


int main( ){
    char s[100];
    gets(s);
    int a;
    for(int i=0;i<strlen(s);i++){
       switch(toupper(s[i])-'A'){
       case 0:case 1:case 2:a=2;break;
       case 3:case 4: case 5:a=3;break;
       case 7:case 6:case 8:a=4;break;
       case 9 :case 10:case 11:a=5;break;
       case 12:case 13:case 14:a=6;break;
       case 15:case 16:case 17:case 18:a=7;break;
       case 19:case 20:case 21:a=8;break;
       default:a=9;break;
       }
       printf("%d",a);
    }


    return 0;
}

