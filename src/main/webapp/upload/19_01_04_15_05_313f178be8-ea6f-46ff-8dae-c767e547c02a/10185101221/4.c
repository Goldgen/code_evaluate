#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char arr[101];
    char lett[101];
    int num=0;
    gets(arr);
    int i=0;
    for(i=0;arr[i]!='\0';i++){
        if(arr[i]!=' '){
            char *pp=lett;
            if(strchr(pp,arr[i])==0){
               lett[num]=arr[i];
               char *p=arr;
               int j=0;
               while(p = strchr(p,lett[num])){
                       p++;
                       j++;
                   }
               printf("%c %d; ",lett[num],j);
               num++;
               }
        }
    }
    return 0;
}
