#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char a='A';
    for(int i=1;i<=2*n-1;i++)
    {
        if(i<=n)
            for(int v=1;v<=n+i-1;v++)
            {
                if(v<n-i+1)printf(" ");
                else printf("%c",a);
                if(v==n+i-1)printf("\n");
            }
        else
            for(int v=1;v<3*n-i;v++)
            {
                if(v<=i-n)printf(" ");
                else printf("%c",a);
                if(v==3*n-i-1&&i!=2*n-1)printf("\n");
            }
        a++;
    }
    return 0;
}