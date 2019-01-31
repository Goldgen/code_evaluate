#include <stdio.h>
#include <math.h>
int main(){
    int n,cnt,num;
    scanf("%d",&n);
    int data[n+1];
    for(int i=0;i<n;++i){
        scanf("%d",&data[i]);
    }
    scanf("%d %d",&cnt,&num);
    for(int j=n;j>cnt;--j){
        data[j]=data[j-1];
    }
    data[cnt]=num;
    for(int k=0;k<n+1;++k){
        printf("%d",data[k]);
        if(k<n)
            printf(" ");
    }
    return 0;
}
