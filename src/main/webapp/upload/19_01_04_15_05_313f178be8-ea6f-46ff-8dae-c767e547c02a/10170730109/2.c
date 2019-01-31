#include<stdio.h>
int main(){
    int a,b,r,n;
    int hasanswer=0;
    while(scanf("%d+%d=%d",&a,&b,&r)!=EOF){
        //if n is +
        for(n=0;n<=9;n++){
            if(r==a*(int)pow(10,n)+b){
                printf("%d",n);
                hasanswer=1;
                break;
            }
        }
        //if n is -
        if(hasanswer==0){
            for(n=0;n<=9;n++){
                if(r==b*(int)pow(10,n)+a){
                    printf("-%d",n);break;
                }
             }
        }
    }
    return 0;
}