#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[111], n;
    int k, cnt=0, b[111];
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &k);
    for(int i=0; i<n; i++)
        if(a[i]==k) b[cnt++]=i;
    if(cnt==0) printf("ERROR");
    else{
        for(int i=0; i<cnt-1; i++)
            printf("%d ", b[i]);
        printf("%d", b[cnt-1]);
    }
    return 0;
}
