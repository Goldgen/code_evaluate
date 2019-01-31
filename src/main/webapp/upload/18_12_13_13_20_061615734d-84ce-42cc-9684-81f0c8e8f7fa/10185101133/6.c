#include <stdio.h>
#include <stdlib.h>

void rotate(int* pp, int n, int m){
    int num=n;
    int i=0;
    while(n){
        *(pp+n+m-1)=*(pp+n-1);
        n--;
    }
    while(i<m){
        *(pp+i)=*(pp+num+i);
        i++;
    }
    while(num){
    printf("%d",*pp++);
    if(num!=1)
        printf(" ");
    num--;
    }
    return;
}


int main()
{
    int n,m;
    int p[20]={0};
    int *pp=p;
    int i=0;
    scanf("%d %d",&n,&m);
    while(i<n){
        scanf("%d",&p[i]);
        i++;
    }
    rotate(pp,n,m);
    return 0;
}
