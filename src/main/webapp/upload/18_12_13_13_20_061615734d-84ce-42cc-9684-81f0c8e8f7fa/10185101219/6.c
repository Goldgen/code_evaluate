#include <stdio.h>

void rotate(int* p, int n, int m)
{
    int x[n];
    for(int i=0;i<n;i++)
        x[i]=p[(i+n-m)%n];
    for(int i=0;i<n;i++)
        p[i]=x[i];

}
int main()
{
    int n1,m1;
    scanf("%d %d",&n1,&m1);
    int x[11];
    int *p1=x;
    for(int i=0;i<n1;++i)
        scanf("%d",&x[i]);
    rotate(p1,n1,m1);
    printf("%d",x[0]);
    for(int i=1;i<n1;++i)
        printf(" %d",x[i]);
    return 0;
}

