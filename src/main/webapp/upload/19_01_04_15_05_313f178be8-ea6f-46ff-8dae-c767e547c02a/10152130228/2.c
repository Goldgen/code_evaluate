#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    long long int c;
    scanf("%d+%d=%lld", &a, &b, &c);
    if((a+b)==c) printf("0");
    else{
    for(int i=1; i<10; i++){
        int k=1;
        for(int j=0; j<i; j++) k*=10;
        if(c%10==b%10)
            if((a*k+b)==c){
                printf("%d", i);
                break;
            }
        
        if(c%10==a%10){
            if((a+b*k)==c){
                printf("-%d", i);
                break;
            }
        }
    }
    }
    return 0;
}
