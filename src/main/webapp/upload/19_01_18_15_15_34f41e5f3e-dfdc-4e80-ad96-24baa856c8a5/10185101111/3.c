#include <stdio.h>
#include <math.h>
int sushu(int n){
    int limit=1;
    for(int m=2;m<=sqrt(n);m++){
        if(n%m==0){
            limit=0;
            break;
        }
    }
    return limit;
}
int main()
{
    int t;
    scanf("%d",&t);
    printf("%d",t);
    for(int b=2;b<=t/2;b++){
        for(int a=2;a<t;a++){
            if(sushu(a)&&sushu(b)&&a+b==t)
                printf("=%d+%d",b,a);
        }
    }

}