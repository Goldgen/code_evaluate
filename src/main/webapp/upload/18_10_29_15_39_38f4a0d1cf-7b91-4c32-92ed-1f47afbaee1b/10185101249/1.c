#include <stdio.h>
int main()
{
    int a,b,c;
    for(a=1;7*a<=100;a++)
    {
        for(b=1;5*b<=100;b++)
        {
            for(c=3;c/3<=100;c+=3)
            {
                if(a+b+c==100&&7*a+5*b+c/3==100)
                    printf("%d %d %d",a,b,c);
            }
        }
    }
    return 0;
}
