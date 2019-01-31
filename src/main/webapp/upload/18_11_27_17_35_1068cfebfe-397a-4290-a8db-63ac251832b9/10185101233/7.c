/*
4
2 2 6 8
2
0 1
4
2 4 6 8
10
ERROR*/
#include<stdio.h>
int main()
{
    int n;
    int a;
    int b;
    int c=0;
    int j=0;
    scanf("%d\r",&n);
    int shu[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        shu[i]=a;
    }
    scanf("\r");
    scanf("%d",&b);
    while(c<n)
    {
        if(b==shu[c])
        {
            printf("%d ",c);
            c++;
            j++;
        }
        if(b!=shu[c])
        c++;
    }
    if(j==0)
        printf("ERROR");
    return 0;
}
