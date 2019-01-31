#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int Arr[n];
    int i;
    for(i=0;i<n;i++) scanf("%d",&Arr[i]);
    int a,j,count=0;
    scanf("%d",&a);
    for(i=0;i<n;i++){
        if(a==Arr[i]){
            count++;
            for(j=i;j<n;j++){
                Arr[j]=Arr[j+1];
            }
        }
    }
    if(count==0) printf("ERROR");
    if(count>0){
        for(i=0;i<n-count;i++){
            printf("%d",Arr[i]);
            if(i<n-count-1) printf(" ");
    }}
    return 0;
}
