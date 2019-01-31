#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int Arr[n+2],i;
    for(i=0;i<n;i++) scanf("%d",&Arr[i]);
    int a,b;
    scanf("%d %d",&a,&b);
    for(i=n;i>a;i--)
        Arr[i]=Arr[i-1];
    Arr[a]=b;
    for(i=0;i<=n;i++){
        printf("%d",Arr[i]);
        if(i<n) printf(" ");
    }
    return 0;
}
