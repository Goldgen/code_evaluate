#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    int i;
    bool flag = true;
    for(i = 1;;i++)
    {
        b *= 10;
        int temp;
        temp = a+b;
        if(temp == c)
        {
            printf("%d",i);
            bool flag = false;
            break;
        }
        if(temp > c)
            break;
    }
    if(flag)
    {
        for(i = 1;;i++)
    {
        a *= 10;
        int temp;
        temp = a+b;
        if(temp == c)
        {
            printf("-%d",i);
            break;
        }
        if(temp > c)
            break;
    }
    }
    return 0;
}
