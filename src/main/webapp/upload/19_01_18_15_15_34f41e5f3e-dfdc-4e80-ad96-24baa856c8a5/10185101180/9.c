#include <stdio.h>
int main()
{
    int N,n,i,j,a,b,c,d,e,f;
    scanf("%d",&n);
    printf("1\n");
    printf("1 1");
    if(n>2)
    {
        for(i=2;i<n;i++)
        {
            printf("\n");
            printf("1 ");
            for(j=1;j<i;j++)
            {
                for(a=1,b=1;a<i+1;a++)
                {
                    b=b*a;
                }
                for(c=1,d=1;c<j+1;c++)
                {
                    d=d*c;
                }
                for(e=1,f=1;e<i-j+1;e++)
                {
                    f=f*e;
                }
                N=b/(d*f);
                printf("%d ",N);
            }
            printf("1");
        }
    }
    return 0;
}
