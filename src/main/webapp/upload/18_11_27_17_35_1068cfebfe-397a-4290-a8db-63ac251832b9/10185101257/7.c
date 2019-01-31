#include <stdio.h>
#include <math.h>
int main(){
    int n,num,cnt=0;
    scanf("%d",&n);
    int data[n],ans[n];
    for(int i=0;i<n;++i){
        scanf("%d",&data[i]);
    }
    scanf("%d",&num);
    for(int j=0;j<n;++j){
        if(data[j]==num){
            ans[cnt]=j;
            ++cnt;
        }
    }
    if(cnt==0)
        printf("ERROR");
    for(int k=0;k<cnt;++k){
        printf("%d",ans[k]);
        if(k<cnt-1)
            printf(" ");
    }
    return 0;
}
