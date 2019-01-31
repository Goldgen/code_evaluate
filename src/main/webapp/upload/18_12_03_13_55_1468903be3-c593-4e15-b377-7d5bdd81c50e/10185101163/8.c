#include <stdio.h>
#include <string.h>

int main()
{
    char Arr[81];
    gets(Arr);
    int l=strlen(Arr);
    int i;
    for(i=0;i<l/2;i++){
        if(Arr[i]!=Arr[l-i-1]){
            printf("False");
            return 0;
        }
    }
    printf("True");
    return 0;
}
