#include <stdio.h>
int main(){
    int n,m,a[100];
    scanf("%d %d",&n,&m);
    int i=0;
    int b=n;
    while(b){
        a[i]=b%10;
        i++;
        b/=10;
    }
    printf("%d ",i);
    m=m%i;
    for(int j=m-1;j>=0;j--){
        printf("%d",a[j]);
    }
    for(int k=i-1;k>=m;k--){
        printf("%d",a[k]);
    }
}
