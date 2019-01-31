#include <stdio.h>
#include <ctype.h>
void strin(int a)
{
     printf("%-3d     %c",a,a);
}
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int c=0;
    for(int t=m;t<=n;t++)
    {
        if(isgraph(t))
        {
            strin(t);
            c++;
            if(t!=n)
            printf("\n");
        }
        if(t==n&&c==0)
            printf("NONE");
    }
    return 0;
}