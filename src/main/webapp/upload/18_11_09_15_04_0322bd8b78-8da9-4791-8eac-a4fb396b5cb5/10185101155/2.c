#include <stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    int t;
    int m,p,q=0;
    for(t=1;t<=n;t++)
    {
       for(m=1;m<=2*n-2*t;m++)
       printf(" ");
       for(p=1;p<=t;p++)
       {
           if(p==t)
            printf("%d=",p);
           else
           printf("%d+",p);
       }
       for(q=t;q>0;q--)
       {
           if(q==t)
            printf("%d",q);
           else
            printf("+%d",q);

       }
       if(t!=n)
        printf("\n");

    }
    return 0;
}