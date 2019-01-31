#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[200]={},apl[20]="aeiouAEIOU";
    int i,j;
    scanf("%s",a);
    for(i=0;i<strlen(a);i++){
        for(j=0;j<10;j++){
            if(a[i]==apl[j]){
                printf("yes");
                return 0;
            }
        }
    }


    printf("no");
    return 0;
}
