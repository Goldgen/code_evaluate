#include <stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include <time.h>
#include<math.h>


int main( ){
    int len;
    scanf("%d",&len);
    len++;
    int a[len];
    for(int i=0;i<len-1;i++){
        scanf("%d",&a[i]);
    }
    int insert;
    scanf("%d",&insert);
    for (int i=len-1;i>insert;i--){
        a[i]=a[i-1];
    }
    scanf("%d",&a[insert]);
    for (int i=0;i<len;i++){
        printf("%d",a[i]);
        if(i<len-1)printf(" ");
    }
	return 0;
}

