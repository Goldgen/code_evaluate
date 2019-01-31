#include <stdio.h>
#include <string.h>
int main(){
    int T;
    char A[60], B[60];
    scanf("%d", &T);
    for(int i = 0; i < T; ++i){
        char* a = &A;
        char* b = &B;
        memset(A, '\0', strlen(A));
        memset(B, '\0', strlen(B));
        scanf("%s", A);
        while(*a != '\0'){
            if(*a == 'Z')
                *b = 'A';
            else
                *b = *a + 1;
            a++;
            b++;
        }
        *b = '\0';
        printf("case #%d: %s\n", i, B);
    }
    return 0;
}
