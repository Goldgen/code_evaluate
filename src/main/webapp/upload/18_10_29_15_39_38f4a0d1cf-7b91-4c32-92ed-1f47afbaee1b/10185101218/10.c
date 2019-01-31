#include<stdio.h>
#include<math.h>
int main(void)
{
    int n,a,b,c,d;
    scanf("%d",&n);
    printf("{}");
    for(a=0;a<n;a++)
    {
        printf("\n{%d}",a);
        if(a>=1)
        {
            for(c=1;c<=a;c++)
            {
                for(b=0;b<=a-c;b++)
                {
                    printf("\n{");
                    printf("%d,",b);
                    for(d=a-c+1;d<=a;d++)

                    {
                        if(d==a)
                            printf("%d",d);
                        else
                        printf("%d,",d);
                    }
                    printf("}");
                }
            }
        }
    }
    return 0;
}
