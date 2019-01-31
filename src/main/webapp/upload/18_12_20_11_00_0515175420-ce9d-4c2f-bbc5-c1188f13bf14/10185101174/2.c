#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
void str(char** ,int );
int main()
{
   int times;
   scanf("%d",&times);
   getchar();
   for(int c=0; c<times; c++){
    char**arr;
	arr=(char**)malloc(201*sizeof(char*));
    for(int i=0;i<201;i++)
        arr[i]=(char*)malloc(201*sizeof(char));
    int place=0;
    char ch;
    while(scanf("%s",arr[place])){
        ch=getchar();
        if(ch=='\n')
            break;
        else
            place++;
   }
   str(arr,place);
   printf("case #%d:\n",c);
   for(int i=0; i<place+1; i++){
    if(c==times-1){
    if(i==place)
    printf("%s",arr[i]);
    else
    printf("%s ",arr[i]);
   }
   else{
    if(i==place)
    printf("%s\n",arr[i]);
    else
    printf("%s ",arr[i]);
   }
   }

   free(arr);
   }

}
void str(char** arr,int place){
    int character[201];
    int others[201];
    int point=0;
    int ads=0;
    char swap[201];
    for(int i=0; i<place+1; i++){
        bool judge=true;
        for(int j=0; j<strlen(arr[i]); j++){
            if((arr[i][j]<'A')||(arr[i][j]>'Z')){
                others[point]=i;
                point++;
                judge=false;
                break;
            }
        }
        if(judge){
            character[ads]=i;
            ads++;
        }
    }
    for(int i=1; i<ads; i++){
        for(int j=i; j>0; j--){
            if(strcmp(arr[character[j]],arr[character[j-1]])<0){
            strcpy(swap,arr[character[j]]);
            strcpy(arr[character[j]],arr[character[j-1]]);
            strcpy(arr[character[j-1]],swap);
        }
    }
    }

    return arr;

}
