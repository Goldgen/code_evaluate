#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int Arr[n],i;
    for(i=0;i<n;i++) scanf("%d",&Arr[i]);
    int a,count=0;
    scanf("%d",&a);
    for(i=0;i<n;i++){
        if(a==Arr[i]) count++;
    }
    if(count==0) printf("ERROR");
    if(count>0){
        int Num[count],j=0;
        for(i=0;i<n;i++){
            if(a==Arr[i]){Num[j]=i;
            j++;}
        }
        for(i=0;i<count;i++){
            printf("%d",Num[i]);
            if(i<count) printf(" ");        }
    }
    return 0;
}
