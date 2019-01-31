#include <stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include <time.h>
#include<math.h>
#include<string.h>


int main( ){
    int len=40;
    int n;
    scanf("%d",&n);
    char s[n][len];
    getchar();
    for(int i=0;i<n;i++)
        gets(s[i]);



    char *p[n];
    for(int i=0;i<n;i++){
        p[i]=s[i];
    }
    char *P;
    for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++)
        if(strcmp(p[j],p[j+1])<0){

            P=p[j];
            p[j]=p[j+1];
            p[j+1]=P;
        }

    }
    for(int i=0;i<n;i++){
        printf("%s\n",p[i]);
    }
    return 0;
}


