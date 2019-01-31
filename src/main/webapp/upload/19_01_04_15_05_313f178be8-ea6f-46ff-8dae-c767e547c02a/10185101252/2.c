#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main(void){
    int a, b, c;
    int result = 0;
    scanf("%d+%d=%d", &a, &b, &c);
    for(int i = 0; i <= 9; i++){
        if((int)(a + b*pow(10, i)) == c){
            result = -i;
            break;
        }
    }
    for(int i = 0; i <= 9; i++){
        if((int)(b + a*pow(10, i)) == c){
            result = i;
            break;
        }
    }
    printf("%d", result);


    return 0;
}

