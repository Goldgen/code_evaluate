#include <stdio.h>
#include <stdlib.h>



int main()
{
    int n,m;
    scanf("%d",&n);
    int a[n];
    int i,p,q,k;
    int j=0;
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);

        for(i=0;i<=n-1;i++)
       {
        if(a[i]==m)
            j=j+1;
       }
        if(j==0)
            {printf("ERROR");}
        else if(j==1)
        {
            for(p=0;p<=n-1;p++)
            {
                if(a[p]==m)
                    printf("%d",p);
            }
        }
        else
        {
            for(q=0;q<=n-1;q++)
            {
                if(a[q]==m)
                printf("%d",q);
                    break;
            }
            for(k=q+1;k<=n-1;k++)
            {
                if(a[k]==m)
                {printf(" %d",k);}
            }
        }





return 0;
}
