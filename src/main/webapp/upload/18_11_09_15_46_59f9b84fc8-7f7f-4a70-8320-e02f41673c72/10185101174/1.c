#include <stdio.h>
#include <stdlib.h>

int main()
{

    for(int a=0;a<100;a++)
    {
        if((a%3==0)&&(a%10==6)&&(a!=96))
            printf("%d ",a);
        else if(a==96)
            printf("%d",a);
    }
}
