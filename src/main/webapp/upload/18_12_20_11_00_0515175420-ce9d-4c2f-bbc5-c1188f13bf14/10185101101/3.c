#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number[100]={0};
    int i,n;
    scanf("%d",&n);

    for(i=0;i<n;++i){
        scanf("%d",&number[i]);
    }
    int mini= -2147483647;
    mini = number[0];
    for(i=0;i<n;++i){
        if(number[i]<mini)
            mini=number[i];
    }
    int sum=0;
    for(i=0;i<n;++i){
        sum+=number[i];
    }
    printf("%d %d",mini,sum);
    return 0;
}
