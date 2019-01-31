#include <stdio.h>
#include <string.h>

void rotate(int* p,int n,int m)
{
    for(int js = 0;js < n;js++){
        *(p+n+js) = *(p+js);
    }
}

int main(void)
{
    int n = 0,m = 0,temp = 0;
    scanf("%d %d",&n,&m);
    temp = 2 * n;
    int num[temp];
    for(int i = 0;i < n;i++)
        scanf("%d",&num[i]);
    rotate(num,n,m);
    printf("%d",num[n-m]);
    for(int js = n-m+1;js < 2*n-m;js++){
        printf(" %d",num[js]);
    }
    return 0;
}
