#include <stdio.h>
void rotate(int *p, int n, int m);

int main()
{
    int n, m;
    scanf("%d %d",&n,&m);
    int num[15] = {0};
    int i;
    for (i=0; i<n; i++) {
        scanf("%d",&num[i]);
    }
    int *p = num;

    rotate(p, n, m);

    return 0;
}

void rotate(int *p, int n, int m)
{
    int i;
    for (i=n-m; i<n; i++) {
        printf("%d ",*(p+i));
    }
    for (i=0; i<(n-m); i++) {
        printf("%d",*(p+i));
        if (i<(n-m-1)) printf(" ");
    }
    return;
}
