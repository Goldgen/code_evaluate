#include <stdio.h>

int main(void)

{
    int n = 0;
    int spacechecker = 0;
    for (n=0;n<=9;n++)
    {
        if(n%3==0)
        {
            if (spacechecker==1)
            printf(" ");
            spacechecker = 1;
            if(n!=0)
                printf("%d",n);
            printf("6");
        }
    }
}
