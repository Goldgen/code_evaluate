#include<stdio.h>
void di(unsigned int);
int main()
{
    int n;
    scanf("%d",&n);
    if(n)
    di(n);
    else
    printf("0");
}
void di(unsigned int a)
{int m;
if(a)
    {di(a >> 1);
    m=a&1;
    printf("%d",m);
    }
}