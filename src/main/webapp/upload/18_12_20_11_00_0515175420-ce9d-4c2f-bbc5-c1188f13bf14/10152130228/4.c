#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[111];
    int cnt=0;
    while(1){
        scanf("%c", &a[cnt]);
        if(a[cnt]=='?') break;
        cnt++;
    }
    for(int i=cnt-1; i>=0; i--){
        printf("%c", a[i]);
    }
    return 0;
}
