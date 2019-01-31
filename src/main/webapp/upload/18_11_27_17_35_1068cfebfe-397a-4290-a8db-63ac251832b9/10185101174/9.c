#include <stdio.h>
#include <stdlib.h>

int main()
{
    char first[1000]={0};
    char second[1000]={0};
    char third[1000]={0};
    int carry[1000]={0};
    char ch='0';
    char zh;
    int i=0;
    int j=0;
    while((zh=getchar())!='\n'){
        first[i]=zh;
        i++;
    }
    while((zh=getchar())!=EOF){
        second[j]=zh;
        j++;
    }
    j--;
    if(i<j){
       for(int s=0; s<j-i; s++)
        third[s]='0';
        for(int a=j-i,m=0; a<j; a++,m++)
        third[a]=first[m];
    for(int n=j-1; n>0; n--){
        if(second[n]+third[n]+carry[n]-2*ch>9)
            carry[n-1]=1;
    }
    if(second[0]+third[0]+carry[0]-2*ch>9)
    printf("1");
    for(int x=0; x<j; x++)
    printf("%d",(second[x]+third[x]+carry[x]-2*ch)%10);
    }

    if(i>=j){
        for(int s=0; s<i-j; s++)
        third[s]='0';
        for(int a=i-j,m=0; a<i; a++,m++)
        third[a]=second[m];
    for(int n=i-1; n>0; n--){
        if(first[n]+third[n]+carry[n]-2*ch>9)
            carry[n-1]=1;
    }
    if(first[0]+third[0]+carry[0]-2*ch>9)
        printf("1");
    for(int x=0; x<i; x++)
        printf("%d",(first[x]+third[x]+carry[x]-2*ch)%10);
    }
}
