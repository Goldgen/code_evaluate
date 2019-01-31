#include <stdio.h>
#include <stdlib.h>

int main()
{

unsigned long long total=1ULL;
    int a;
    scanf("%d",&a);
    if(a<20)
    {
    for(int number=1;number<=a;number++)
    {
        total=total*number;
    }
    printf("%llu",total);
    }

}
