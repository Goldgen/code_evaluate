#include <stdio.h>
int main()
{
    for(int i=1;i<=100;i++){
        for(int j=1;j<=100;j++){
            for(int k=1;k<=100;k++){
                if(i+j+k==100&&7*i+5*j+k/3.0==100){
                    printf("%d %d %d",i,j,k);
                    break;
                    }}
            }
        }
    }


