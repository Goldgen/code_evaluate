#include <stdlib.h>
#include<stdio.h>
#include<string.h>

int main( ){
    char a[100];
    char b[100];int c[100]={0};
    scanf("%s",a);
    scanf("%s",b);
    int a_len=strlen(a);
    int b_len=strlen(b);

    int max=a_len>b_len?a_len:b_len;
    for(int i=max-1;i>=0;i--){
        if(a_len+i-max>=0)a[i]=a[a_len+i-max];

        else a[i]='0';

    }

    for(int i=max-1;i>=0;i--){
        if(b_len+i-max>=0)b[i]=b[b_len+i-max];else b[i]='0';
    }

    int j;
    for(int i=max-1;i>=0;i--){
        j=max-1-i;
        c[j]+=a[i]+b[i]-48*2;
        if(c[j]>=10){
                c[j]%=10;
        c[j+1]++;
        }
    }

    int ret=0;
    for(int i=99;i>=0;i--){
        if (c[i]!=0){
            ret=i;break;
        }
    }
   for(int i=ret;i>=0;i--){
        printf("%d",c[i]);
    }
    return 0;
}

