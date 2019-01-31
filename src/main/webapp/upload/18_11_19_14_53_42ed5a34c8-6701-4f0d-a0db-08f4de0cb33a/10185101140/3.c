#include <stdio.h>
#include <stdlib.h>

void Func(int n);
static int count = 0;
int main(void)
{
    int num;
    Func(num);
    return 0;
}

void Func(int n){
    scanf("%d",&n);

    if (n>0){count++;
        Func(n);
        printf("%d",n);
        if(count>1){
            printf(" ");
            count--;
        }
    }
    return;
}
