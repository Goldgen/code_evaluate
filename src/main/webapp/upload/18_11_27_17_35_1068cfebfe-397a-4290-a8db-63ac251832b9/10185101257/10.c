#include<stdio.h>
void bubble_sort(int a[],int n){
    int i,j,temp;
    for(j=0;j<n-1;j++)
        for(i=0;i<n-1-j;i++){
            if(a[i]>a[i+1]){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
}
int main(){
    int n;
    scanf("%d",&n);
    int number[n];
    for(int j=0;j<n;++j)
        scanf("%d",&number[j]);
    bubble_sort(number,n);
    for(int k=0;k<n;++k){
        printf("%d",number[k]);
        if(k<n-1)
            printf(" ");
    }
    return 0;
}
