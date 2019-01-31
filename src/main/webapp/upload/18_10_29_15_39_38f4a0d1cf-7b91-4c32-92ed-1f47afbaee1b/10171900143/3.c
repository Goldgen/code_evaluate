#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>


int main()
{
    int a;
    scanf("%d",&a);
    int p[1001];
    p[0]=p[1]=0;
    p[2]=1;
    for(int i=3;i<=1000;i++){
        if(i%2==0)p[i]=0;
        else p[i]=1;
    }
    for(int i=3;i<=1000;i++){
        if(p[i]){
                for(int j=i+i;j<=1000;j+=i){
                    p[j]=0;
                }
           }
    }printf("%d",a);
    for(int i=3;i<=1000;i++){
        for(int j=i;j<=1000;j++){
            if(p[i]+p[j]==2 && i+j==a){
                printf("=%d+%d",i,j);
            }
        }
    }
    return 0;
}

