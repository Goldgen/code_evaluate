#include <stdio.h>
#include <stdlib.h>

int Max(int a[], int n);

int main()
{
    int n;//数组中原元素个数
    scanf("%d",&n);
    int a[10000] = {0}; int i;
    for (i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }//数组中各个元素
    int count = 1; int times = -1;
    int b[10000] = {0};
    for (i=0; i<n-1; i++) {
        if (a[i]==a[i+1]) {
            count++;
            if (i==n-2) {
                b[++times] = count;
                break;
            }
        }
        else if (count>1 && a[i]!=a[i+1]) {
            b[++times] = count;
            count = 1;
        }
    }
    if (b[0]==0) printf("%d",1);
    else printf("%d",Max(b, times+1));
    return 0;
}

int Max(int a[], int n){
    int maxnum = a[0];
    int i;
    for (i=1; i<n; i++) {
        if (a[i]>maxnum)
            maxnum = a[i];
    }
    return maxnum;
}
