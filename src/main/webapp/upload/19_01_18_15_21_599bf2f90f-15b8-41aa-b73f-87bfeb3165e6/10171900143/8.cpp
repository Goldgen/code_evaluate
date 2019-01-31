#include <stdio.h>
#include <math.h>
void swap(int *,int*);
int main(void)
{
    int a[3];
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    if(a[0]>a[1]){
        swap(&a[0],&a[1]);
    }
    if(a[1]>a[2]){
        swap(&a[1],&a[2]);
    }
    if(a[0]>a[1]){
        swap(&a[0],&a[1]);
    }
    printf("%d",a[1]);
return 0;
}
void swap(int*pa,int*pb){
    int t;
    t=*pa;
    *pa=*pb;
    *pb=t;
}
