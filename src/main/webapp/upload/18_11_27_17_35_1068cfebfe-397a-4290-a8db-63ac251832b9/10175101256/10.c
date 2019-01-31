#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const double pi=3.1415926;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){                //冒泡排序
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
   /* for(int i=0;i<n;i++){               //选择排序
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i]){
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }*/
    for(int i=0;i<n;i++){
        if(i)
            printf(" ");
        printf("%d",a[i]);
    }
}
