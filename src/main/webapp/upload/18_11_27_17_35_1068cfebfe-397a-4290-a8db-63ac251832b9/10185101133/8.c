#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,count=1,n,j=1;
    scanf("%d",&n);
    int data[100]={0};
    for(i=0;i<n;i++){
        scanf("%d",&data[i]);
    }
    for(i=0;i<n-1;i++){
        if(data[i]==data[i+1])
            count++;
        else
            count=1;
        if(count>=j)
            j=count;
    }
    printf("%d",j);
    return 0;
}