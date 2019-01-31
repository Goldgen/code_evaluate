#include<stdio.h>

int main()
{
    char num[100]={0};
    char* pnum=num;
    int i=0;

    while((*(pnum+i)=getchar())!='?')
        i++;
    while(i>0){
        printf("%c",*(pnum+i-1));
        i--;
    }
    return 0;
}