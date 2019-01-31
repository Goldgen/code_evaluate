#include <stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include <time.h>
#include<math.h>


int main( ){
    int len;
    scanf("%d",&len);
    int a[len];
    int del;
    int ret=0;
    for(int i=0;i<len;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&del);
    for (int i=0;i<len;i++){
            if (ret==1)a[i-1]=a[i];
        if(a[i]==del)ret=1;
    }
    if(ret==0)printf("ERROR");
    else{
    for (int i=0;i<len-1;i++){
        printf("%d",a[i]);
        if(i<len-2)printf(" ");
    }}
	return 0;
}

