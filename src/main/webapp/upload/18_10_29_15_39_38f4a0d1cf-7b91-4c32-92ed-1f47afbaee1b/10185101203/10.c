#include<stdio.h>
#include<math.h>
int main()
{
    int n,all,a,b;
    scanf("%d",&n);
    all=pow(2,n);
    for(a=0;a<all;a++)
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
        if(a!=all-1)
            printf("\n");

    }
}