#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int a[t];
    int b[t];
    for(int x=0;x<t;x++)
        scanf("%d",&a[x]);
    int m,n=0;//m为查询的数字
    scanf("%d",&m);
    for(int x=0;x<t;x++)
        {
            if(a[x]==m)
            {
                b[n]=x;
                n++;
            }
        }
        if(n==0)
            printf("ERROR\n");
        else
        {
    for(int x=0;x<n;x++)
    {
        printf("%d",b[x]);
        if(x!=n-1)
            printf(" ");
    }
        }
    return 0;
}