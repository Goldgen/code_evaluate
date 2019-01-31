#include<stdio.h>
#include<math.h>
int main()
{
    int n,t,a,b;
    scanf("%d",&n);
    t=pow(2,n);
    for(a=0;a<t;a++)
    {
        printf("{");
        for(b=0;a>>b!=0;b++)
        {
            if((a>>b)&1)
                {
                    printf("%d",b);
                    if(a>>(b+1))
                        printf(",");
                }
        }
        printf("}");
        if(a!=t-1)
            printf("\n");

    }
}