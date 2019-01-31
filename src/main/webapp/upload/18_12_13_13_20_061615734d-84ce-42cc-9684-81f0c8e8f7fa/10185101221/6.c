#include <stdio.h>
#include <stdlib.h>
int* rotate(int* p, int a, int b)
{
    int ch[a];
    for(int i=0;i<b;i++)
        ch[i]=p[a-b+i];
    for(int i=b;i<a;i++)
        ch[i]=p[i-b];
    printf("%d",ch[0]);
    for(int i=1;i<a;i++)
        printf(" %d",ch[i]);
    return ch;
}
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    rotate(arr,n,m);
    return 0;
}
