#include <stdio.h>
#include <math.h>
int main(){
    int n,num;
    scanf("%d",&n);
    int data[n];
    for(int i=0;i<n;++i){
        scanf("%d",&data[i]);
    }
    scanf("%d",&num);
    for(int j=0;j<n;++j){
        if(data[j]==num){
            for(int k=j;k<n-1;++k)
                data[k]=data[k+1];
            for(int l=0;l<n-1;++l){
                printf("%d",data[l]);
                if(l<n-2)
                    printf(" ");
            }
            return 0;
        }
    }
    printf("ERROR");
    return 0;
}
