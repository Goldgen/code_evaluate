#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char ch[1001]={'\0'};
    gets(ch);
    char zh[1001]={'\0'};
    int place=0;
    for(int i=0; i<strlen(ch); i++){
       int number=0;
       bool judge=true;
       if(ch[i]!=' '){
        for(int j=0; j<strlen(zh); j++){
            if(ch[i]==zh[j]){
                judge=false;
                break;
            }
        }
       }
    if((judge==true)&&(ch[i]!=' ')){
        for(int k=0; k<strlen(ch); k++){
            if(ch[i]==ch[k]){
                number++;
            }
        }
      zh[place]=ch[i];
      place++;
      printf("%c %d; ",ch[i],number);
    }
    }
}
