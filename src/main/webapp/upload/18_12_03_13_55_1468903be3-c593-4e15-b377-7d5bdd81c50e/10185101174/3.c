#include <stdio.h>
#include <stdlib.h>

int max(int,int);
int min(int,int);
int main()
{
   char first[800];
   char second[800];
   int i=0;
   int j=0;
   char ch;
   while((scanf("%c",&ch))&&ch!=' '){
    first[i]=ch;
    i++;
   }
   while(scanf("%c",&ch)!=EOF){
    second[j]=ch;
    j++;
   }
  
    for(int a=0;a<min(i,j); a++){
        putchar(first[a]);
        putchar(second[a]);
    }
    for(int a=min(i,j); a<max(i,j); a++){
        if(i>j)
            printf("%c",first[a]);
        else
            printf("%c",second[a]);
    }
}
int max(int a,int b){
    if(a>=b)
        return a;
    
        return b;
}
int min(int a,int b){
    if(a>=b)
        return b;
    
        return a;
}