#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const double pi=3.1415926;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],x;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);//要删除的元素
    int t,q=1;
    for(int i=0;i<n;i++){
        if(x==a[i]){
        t=i;
        q--;        //q为0表示已经删除
        break;
        }
    }
    if(q){
        printf("ERROR");
        return 0;
    }
for(int i=0;i<t;i++){
        if(i)
            printf(" ");
        printf("%d",a[i]);
    }
    for(int i=t;i<n-1;i++){
        a[i]=a[i+1];
        if(i)
            printf(" ");
        printf("%d",a[i]);
    }

}
