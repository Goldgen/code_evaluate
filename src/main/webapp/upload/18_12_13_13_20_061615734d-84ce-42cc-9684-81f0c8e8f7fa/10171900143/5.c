#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Number2Alpha(int num, char* mptr);
int main(){
    int n;
    scanf("%d",&n);
    char month[100];
    Number2Alpha(n,month);
    printf("%s",month);
    return 0;
}

void Number2Alpha(int num, char* mptr){
    char s[12][100]={"January","February","March","April","May","June","July","August","September",
    "October","November","December"};
    for(int i=0;i<strlen(s[num-1]);i++){
        *(mptr++)=s[num-1][i];
    }
    *mptr=0;
}