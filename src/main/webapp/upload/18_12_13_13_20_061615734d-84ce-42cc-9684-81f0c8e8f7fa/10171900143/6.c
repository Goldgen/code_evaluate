#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void rotate(int* p, int n, int m);
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    rotate(a,n,m);
    for(int i=0;i<n;i++)if (i<n-1)printf("%d ",a[i]);
    else printf("%d",a[i]);
    return 0;
}

void rotate(int* p, int n, int m){
    int a;
    if(m<1)return;
    else if(m==1){
        a=p[n-1];
        for(int i=n-1;i>=1;i--){
            p[i]=p[i-1];
        }
        p[0]=a;
    }
    else{
        for(int i=0;i<m;i++){
            rotate(p,n,1);
        }
    }
}



