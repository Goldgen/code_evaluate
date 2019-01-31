#include<stdio.h>
int main()
{
    float i=1,j=2,k,p,s;
    for(p=0;p<50;++p)
    {
        s+=j/i;
        k=i;
        i=j;
        j+=k;
    }
    printf("%.2f",s);
    return 0;
}
