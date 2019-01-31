#include<stdio.h>
int main()
{
    int a,b,c;
    for(b=1;b<=18;b++)
        for(a=1;a<=14;a++)
        {
            c=3*(100-5*b-7*a);
            if(c+b+a==100&&c>=1) printf("%d %d %d",a,b,c);
        }
    return 0;
}