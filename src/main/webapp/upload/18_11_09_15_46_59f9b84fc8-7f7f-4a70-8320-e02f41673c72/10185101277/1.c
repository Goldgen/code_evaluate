#include<stdio.h>
int main()
{
    int a,b=6,s;
    printf("6");
    for(a=1;a<10;a++)
    {
        s=(a*10+b)%3;
        if(s==0)
            {printf(" %d%d",a,b);}
    }
    return 0;
}