#include <stdio.h>
#include <stdlib.h>
//********** Specification of rotate **********
void rotate(int* p, int n, int m){
   int i1=0,j1,t;
   for(i1=0;i1<m;i1++){
    t=p[n-1];
    for(j1=n-1;j1>0;j1--){
        p[j1]=p[j1-1];}
    p[0]=t;
   }
}

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int pp[n];
    int i=0;
    for(i=0;i<n;i++) scanf("%d",&pp[i]);
    rotate(pp,n,m);
    for(i=0;i<n;i++){
            printf("%d",pp[i]);
            if(i<n-1) printf(" ");}
    return 0;
}
