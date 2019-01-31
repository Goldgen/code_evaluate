#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,i,j,q;
    for(i=1;i<=9;++i)
    {
        for(j=0;j<=9;++j)
        {
            for(q=0;q<=9;++q)
            {
                a=i*i*i+j*j*j+q*q*q;
                b=100*i+10*j+q;
                if(a==b)
                {
                    printf("%d ",b);
                }

            }
        }
    }
    return 0;
}

