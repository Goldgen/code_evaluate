#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j,n,count=0;
    scanf("%d",&n);
    int data[100]={0};
    for(i=0;i<n;i++){
        scanf("%d",&data[i]);
    }
    scanf("%d",&j);
    for(i=0;i<n;i++){
        if(count==0 && data[i]==j){
            count=i+1;
            break;
        }
    }
    if(!count){
        printf("ERROR");
        return 0;}
    for(i=0;i<n;i++){
        if(count==n){
            printf("%d",data[i]);
            if(i!=n-2)
                printf(" ");
            else
                return 0;
            continue;
        }
        if(i==count-1)
            continue;
        printf("%d",data[i]);
        if(i!=n-1)
            printf(" ");
    }
    return 0;
}
