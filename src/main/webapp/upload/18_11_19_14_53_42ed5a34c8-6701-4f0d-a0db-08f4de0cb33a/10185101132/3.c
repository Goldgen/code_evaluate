#include <stdio.h>
#include <stdlib.h>

void PrintInv();

int main()
{
    PrintInv();
    return 0;
}

void PrintInv(){
    static int cnt = 0;
    int n;
    scanf("%d", &n);
    if(n == 0){
        return;
    }
    cnt++;
    PrintInv();
    printf("%d", n);
    cnt--;
    if(cnt){
        printf(" ");
    }
}
