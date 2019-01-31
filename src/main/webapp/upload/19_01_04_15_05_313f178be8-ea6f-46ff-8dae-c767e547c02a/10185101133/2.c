#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,temp;
    int count=0;
    scanf("%d+%d=%d",&a,&b,&c);
    temp=a;
    if(a==0){
        while(c!=b){
            count--;
            c/=10;
            }
        printf("%d",count);
        return 0;
    }
    while(a<=c){
        if(a+b==c){
            printf("%d",count);
            return 0;}
        a*=10;
        count++;
    }
    count=0;
    while(b<=c){
        if(temp+b==c){
            printf("%d",count);
            return 0;}
        b*=10;
        count--;
    }
    return 0;
}
