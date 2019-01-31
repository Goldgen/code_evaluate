#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,n,i,s,left;
    scanf("%d+%d=%d",&a,&b,&c);
    n=0;
    s=a+b;
    left=0;
    for(i=0;i<10;i++){
        if(s==c){
            left=1;
            break;
        }
        else{
            n++;
            s=a*pow(10,n)+b;
        }
    }
    if(left==1){
        printf("%d",n);
    }
    else{
        n=0;
        for(i=0;i<10;i++){
            if(s==c){
                left=-1;
                break;
            }
            else{
                n++;
                s=b*pow(10,n)+a;
            }
        }
    }
    if(left==-1){
        printf("%d",-n);
    }
    return 0;
}
