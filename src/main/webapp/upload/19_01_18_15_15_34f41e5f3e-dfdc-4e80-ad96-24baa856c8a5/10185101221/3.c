#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=3;
    int num = 0;
    scanf("%d",&num);
    printf("%d",num);
    for(;i <= num/2; i+=2)
    {
        int j = num -i;
        for(int a=3;a <i;a = a+2)
        {
            if(i%a == 0)
               goto loop;
        }
        for(int b = 3;b <j;b +=2)
        {
            if(j%b == 0)
                goto loop;
        }
        printf("=%d+%d",i,j);
        loop: continue;
    }

    return 0;
}
