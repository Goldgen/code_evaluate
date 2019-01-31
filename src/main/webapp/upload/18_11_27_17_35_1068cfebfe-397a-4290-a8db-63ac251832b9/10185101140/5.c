#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;//数组元素个数
    scanf("%d",&n);
    int a[10000] = {0};
    int i;
    for (i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }//数组各个元素
    int m;//插入的下标
    int num;//要插入的元素
    scanf("%d %d",&m,&num);
    for (i=n; i>=m; i--) {
        a[i+1] = a[i];
    }
    a[m] = num;
    for (i=0; i<n+1; i++) {
        printf("%d",a[i]);
        if (i<n) printf(" ");
    }
    return 0;
}
