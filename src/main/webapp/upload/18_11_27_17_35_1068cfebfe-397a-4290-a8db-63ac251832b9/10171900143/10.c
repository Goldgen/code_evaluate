#include <stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include <time.h>
#include<math.h>
#include<string.h>

void Maopao(int*,int);
void swap(int*,int*);
int main( ){
    int len;
    scanf("%d",&len);
    int *array;
    array=(int *)malloc(sizeof(int)*len);
    for(int i=0;i<len;i++){
        scanf("%d",&array[i]);
    }
    Maopao(array,len);
    for(int i=0;i<len;i++){
        printf("%d",array[i]);
        if(i<len-1)printf(" ");
    }
    free(array);
    return 0;
}

void Maopao(int *a,int len){
    for(int i=0;i<len-1;i++){
        for(int j=0;j<len-i-1;j++){
            if(a[j]>a[j+1])swap(&a[j],&a[j+1]);
        }
    }
}
void swap(int *pa,int*pb){
    int t=*pa;
    *pa=*pb;
    *pb=t;
}
