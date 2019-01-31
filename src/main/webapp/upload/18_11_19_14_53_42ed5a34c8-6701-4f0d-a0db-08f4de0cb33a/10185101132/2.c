#include <stdio.h>
#include <stdlib.h>

int SumDgt(int);

int main()
{
    int m;
    scanf("%d", &m);
    printf("%d", SumDgt(m));
    return 0;
}

int SumDgt(int n){
    static int sum = 0;
    sum += n % 10;
    if(n > 0)
        SumDgt(n/10);
    return sum;
}
