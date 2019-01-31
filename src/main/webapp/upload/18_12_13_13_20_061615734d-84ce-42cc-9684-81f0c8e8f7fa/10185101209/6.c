#include<stdio.h>

void rotate(int* p, int n, int m)
{
    int tem[n];
    int *ptem=tem;
    for(int i=0; i<n-m; i++)
        *(ptem+i+m)=*(p+i);
    for(int i=0; i<m; i++)
        *(ptem+i)=*(p+i+n-m);
    for(int i=0; i<n; i++)
        *(p+i)=*(ptem+i);
}

int main()
{
    int m,n;
    scanf("%d %d",&n,&m);
    int num[n];

    for(int i=0; i<n; i++){
        scanf("%d",&num[i]);
    }
    rotate(num, n, m);
    for(int i=0; i<n; i++){
        if(i!=0)
            printf(" ");
        printf("%d",num[i]);
    }
    return 0;
}