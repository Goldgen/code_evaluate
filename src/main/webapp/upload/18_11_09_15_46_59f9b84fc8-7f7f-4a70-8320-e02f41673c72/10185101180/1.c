#include <stdio.h>
int main()
{
    int n,i;
    for(n=0,i=0;n<100;n++)
    {
        if(n%3==0&&n%10==6)
        {
            if(i!=0)
            {
                printf(" ");
            }
            printf("%d",n);
            i++;
        }
    }
    return 0;
}
