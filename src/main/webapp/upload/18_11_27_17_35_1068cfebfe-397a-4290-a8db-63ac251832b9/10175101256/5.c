#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const double pi=3.1415926;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n+1],x,y;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d %d",&x,&y);
    for(int i=n;i>x;i--){
        a[i]=a[i-1];
    }
    a[x]=y;
    for(int i=0;i<=n;i++){
        if(i)
            printf(" ");
        printf("%d",a[i]);
    }
}
