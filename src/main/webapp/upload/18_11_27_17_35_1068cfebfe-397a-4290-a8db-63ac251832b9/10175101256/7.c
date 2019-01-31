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
    scanf("%d",&x);//要查找的元素
    int q=0;
    for(int i=0;i<n;i++){
        if(x==a[i]){
        if(q)
            printf(" ");
        printf("%d",i);
        q++;        //q为0表示未找到
        }
    }
    if(!q){
        printf("ERROR");
    }
}
