#include <stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include <time.h>
#include<math.h>


int main( ){
    int len;
    scanf("%d",&len);
    int a[len];
    for(int i=0;i<len;i++){
        scanf("%d",&a[i]);
    }
    int key;
    int ret=0;
    scanf("%d",&key);
    for(int i=0;i<len;i++){
        
        if(key==a[i]){
                if(ret==1)printf(" ");
                printf("%d",i);
        ret=1;}
        
    }
    if(ret==0)printf("ERROR");
	return 0;
}

