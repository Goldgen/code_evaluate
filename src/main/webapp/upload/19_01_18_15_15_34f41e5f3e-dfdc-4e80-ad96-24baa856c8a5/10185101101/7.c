#include <stdio.h>
#include <stdlib.h>

int convert(int m)
{
    int k;
    k=0;
    while(m)
    {
    m = m & (m-1);
    k++;
    }
    return k;
}

int main()
{
    int num,i=0;
    scanf("%d",&num);
    i=convert(num);
    printf("%d",i);
    return 0;
}
