#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char ch;
    while((ch=getchar())!='#'){
       char flower[1001]={'\0'};
       char small[1001]={'\0'};
       flower[0]=ch;
       scanf("%s",flower);
       scanf("%s",small);
       getchar();
       char flower2[1001]={'\0'};
       flower2[0]=ch;
       for(int i=0; i<strlen(flower); i++)
       flower2[i+1]=flower[i];
       int times=0;
       for(int i=0; i<strlen(flower2); i++){
        bool judge=true;
        if(flower2[i]==small[0]){
            for(int j=1; j<strlen(small); j++){
                if(flower2[i+j]==small[j])
                    continue;
                else{
                    judge=false;
                    break;
                }
            }
            if(judge){
                times++;
                i+=strlen(small)-1;
            }
        }
       }
       printf("%d\n",times);
    }
}