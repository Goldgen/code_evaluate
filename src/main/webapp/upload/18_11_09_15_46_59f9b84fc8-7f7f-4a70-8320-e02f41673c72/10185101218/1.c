#include<stdio.h>
int main()
{
    int a;
    printf("6");
    for(a=7;a<100;a++){
        if((a%10)!=6)
            continue;
        if((a%3)!=0)
            continue;
        printf(" %d",a);
    }
    return 0;
}
