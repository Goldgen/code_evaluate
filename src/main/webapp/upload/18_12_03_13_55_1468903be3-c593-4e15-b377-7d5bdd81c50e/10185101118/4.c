#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int a[m*n],*c;
    for (int i=0; i<m*n; i++)
        scanf("%d",&a[i]);
    for (int i=0; i<n; i++)
    {
        c=a+i-n;
        for (int v=0; v<m; v++)
        {
            printf("%d",*(c+=n));
            if (v!=m-1) printf(" ");
        }
        if(i!=n-1) printf("\n");
    }
    return 0;
}
