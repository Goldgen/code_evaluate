#include <stdio.h>
int main(){
    int n;
    char a='A';
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=i;j<n;j++){
            printf(" ");
        }
        for(int k=0;k<2*i-1;k++){
            printf("%c",a);
            if(k==2*i-2)
                printf("\n");
        }
        a++;
    }
    for(int i=1;i<=n-1;i++){
        for(int j=n-i;j<n;j++){
            printf(" ");
        }
        for(int k=2*(n-i)-1;k>0;k--){
            printf("%c",a);
            if(i!=n-1&&k==1)
            printf("\n");
        }
        a++;
    }
}
