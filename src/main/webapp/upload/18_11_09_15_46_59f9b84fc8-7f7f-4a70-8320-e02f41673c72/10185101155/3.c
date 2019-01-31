#include <stdio.h>
int main()
{
    char a;
    a='A';
    int n;
    scanf("%d",&n);
    for(int t=1;t<=2*n-1;t++)
    {
        if(t<=n)
        {
            for(int m=1;m<=n+t-1;m++)
            {
                if(m<=n-t)
                    printf(" ");
                else
                    printf("%c",a);
                if(m==n+t-1)
                    printf("\n");
            }

        }
        else 
            for(int x=1;x<=3*n-1-t;x++)
        {
            if(x>=t+1-n)
                printf("%c",a);
            else
                printf(" ");
            if(x==3*n-1-t&&t!=2*n-1)
                printf("\n");
        }
        a++;
    }
    return 0;
}