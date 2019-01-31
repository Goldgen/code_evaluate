#include <stdio.h>
int main(){
    int x[16]={0};
    int sum,summ=0;
    for(int i=0;i<8;i++){
        scanf("%d",&x[i]);
        sum+=x[i];
    }
        for(int j=0;j<8;j++){
        scanf("%d,",&x[j]);
        summ+=x[j];
    }
    printf("%d\n",sum);
    printf("%d",summ);
}