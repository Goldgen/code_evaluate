#include <stdio.h>

int n;
char chars[3] = {'*', ' '};
int main()
{
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        printf("%c", chars[0]);
    printf("\n");
    for(int i = 0; i < n-2; i++){
        for(int j = 0; j < n; j++){
            if(0 == j || n-1 == j){-
                printf("%c", chars[0]);
            }else{
                printf("%c", chars[1]);
            }
        }
        printf("\n");
    }
    for(int i = 0; i < n; i++)
        printf("%c", chars[0]);



}
