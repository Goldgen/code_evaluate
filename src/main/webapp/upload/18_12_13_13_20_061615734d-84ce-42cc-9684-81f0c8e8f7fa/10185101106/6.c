#include<stdio.h>
#include<string.h>
int main()
{
    int m, n ;
    scanf("%d %d",&n, &m);
    int i = 0;
    int data[2*n];
    for(i = 0; i < n ; i++)
    {
        scanf("%d",&data[i]);

    }
    for(i = n;i < 2*n; i++)
    {
        data[i] = data[i-n];
    }


    for(i = n-m ; i < n+n-m-1; i++)
    {
        printf("%d",data[i]);
            printf(" ");
    }
    printf("%d",data[i]);

    return 0;
}
