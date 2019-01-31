#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;//数组中原元素个数
    scanf("%d",&n);
    int a[10000] = {0}; int i, j;
    for (i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }//数组中各个元素
    int num;//要删除的元素
    scanf("%d",&num);
    for (i=0; i<n; i++) {
        if (a[i]==num) {
            for (j=i; j<n; j++) {
                a[j] = a[j+1];
            }
            for (j=0; j<n-1; j++) {
                printf("%d",a[j]);
                if (j<n-2) printf(" ");
            }
            return 0;
        }
    }
    printf("ERROR");
    return 0;
}
