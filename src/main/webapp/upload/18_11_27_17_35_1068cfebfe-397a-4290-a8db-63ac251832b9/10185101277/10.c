#include<stdio.h>
int i;
void order(int a[],int n){
int j;
int temp;
for(j=0;j<n;j++){
    for(i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
}
printf("%d",a[0]);
for(i=1;i<n;i++){
    printf(" %d",a[i]);
}
}
int main()
{
    int n;
    scanf("%d",&n);
    int s[n];
    for(i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    order(s,n);
    return 0;
}