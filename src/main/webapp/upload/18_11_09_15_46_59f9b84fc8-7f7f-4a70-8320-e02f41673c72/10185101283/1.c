#include<stdio.h>
int main()
{
    printf("6");
    int i;
    for(i=11;i<=100;++i)
    {
        if(i%3==0&&i%10==6)
            printf(" %d",i);
    }
    return 0;
}
