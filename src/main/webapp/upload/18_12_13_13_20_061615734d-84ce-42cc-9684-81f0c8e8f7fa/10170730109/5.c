#include <stdio.h>
#include <string.h>
void Number2Alpha(int num, char* mptr);

int main(void){
    int num=0;
    scanf("%d",&num);
    char *mptr=NULL;
    Number2Alpha(num,mptr);

    return 0;
}
void Number2Alpha(int num, char* mptr){
    char month[12][10]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    mptr=month[num-1];
    printf("%s",mptr);
}

