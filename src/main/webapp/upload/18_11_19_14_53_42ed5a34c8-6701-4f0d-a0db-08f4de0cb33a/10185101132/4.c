#include <stdio.h>
#include <stdlib.h>

void PrintBin(int);

int main()
{
    int dec;
    scanf("%d", &dec);
    PrintBin(dec);
    return 0;
}

void PrintBin(int n){
    if(n == 0){
        return;
    }
    PrintBin(n / 2);
    printf("%d", n % 2);
}
