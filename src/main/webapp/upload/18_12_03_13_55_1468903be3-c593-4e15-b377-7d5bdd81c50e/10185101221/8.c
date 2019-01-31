#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char arr[81];
    gets(arr);
    int n=strlen(arr);
    for(int i=0;i<n/2;i++){
        if(arr[i]!=arr[n-i-1]){
            printf("False");
            return 0;
        }
    }
    printf("True");
    return 0;
}
