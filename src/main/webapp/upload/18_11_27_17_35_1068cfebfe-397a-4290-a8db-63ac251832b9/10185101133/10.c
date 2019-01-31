#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j=0,n,tmp;
    scanf("%d",&n);
    int data[100]={0};
    for(i=0;i<n;i++){
        scanf("%d",&data[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(data[j]>data[j+1]){
                tmp=data[j];
                data[j]=data[j+1];
                data[j+1]=tmp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d",data[i]);
        if(i!=n-1)
            printf(" ");
    }
    return 0;
}