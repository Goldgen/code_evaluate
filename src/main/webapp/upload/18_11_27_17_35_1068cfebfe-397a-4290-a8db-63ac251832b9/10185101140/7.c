#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;//数组原元素的个数
    scanf("%d",&n);
    int a[10000] = {0}; int i;
    for (i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }//数组中各个元素
    int num;//要查找的元素
    scanf("%d",&num);
    int count = 0;
    for (i=0; i<n; i++) {
        if (a[i]==num) {
            count++;
            if (count>1) printf(" ");
            printf("%d",i);
        }
    }
    if (count==0) printf("ERROR");
    return 0;
}
