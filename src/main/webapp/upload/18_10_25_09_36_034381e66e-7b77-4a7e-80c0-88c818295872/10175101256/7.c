#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=n/2;i>=0;i--){
        if(i==0){
            for(int j=0;j<n;j++){
                printf("*");
            }
        }
        else{
            for(int k=0;k<n;k++){
                if(k==n-i-1){
                    printf("*\n");
                    break;
                }
                else if(k==i)
                    printf("*");
                else
                    printf(" ");
            }
        }
    }
}