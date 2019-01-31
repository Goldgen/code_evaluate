#include <stdio.h>
void bubble(int a[],int n){
    int i=0,j=0,q=0;
    for(i=0;i<n-1;i++){
        for(j=0;i<n-1-j;j++){
            if(a[j]>a[j+1]){
                q=a[j];
                a[j]=a[j+1];
                a[j+1]=q;
            }
        }
    }
    printf("%d",a[0]);
    for(i=1;i<n;i++){
        printf(" %d",a[i]);
    }
}
int main(void)
{
    int n=0,i=0;
    scanf("%d",&n);
    int a[n];
    for(;i<n;i++){
        scanf("%d",&a[i]);
    }
    bubble(a,n);
    return 0;
}

