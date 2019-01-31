#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

char A[1005], B[1005];

int main(void){


    while(1 == scanf("%s", A)){
        int cnt = 0;
        if(strcmp(A, "#") == 0)
            break;
        scanf("%s", B);
        int len1 = strlen(A);
        int len2 = strlen(B);
        for(int i = 0; i < len1 - len2 + 1; ){
            if(strncmp(A+i, B, len2) == 0){
                cnt++;
                i += len2;
            }else{
                i++;
            }
        }
        printf("%d\n", cnt);
    }


    return 0;
}

