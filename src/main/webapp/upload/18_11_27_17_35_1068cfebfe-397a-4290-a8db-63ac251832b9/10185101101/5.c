#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    int number[1000];
    int i,j,k;
    scanf("%d",&size);
    for(i=0;i<size;++i){
        scanf("%d",&number[i]);
    }
    scanf("%d %d",&j,&k);
    for(i=size-1;i>=j;--i){
        number[i+1]=number[i];
    }
    number[j]=k;
    for(i=0;i<=size;++i){
        printf("%d",number[i]);
        if(i!=size)printf(" ");
    }
    return 0;
}
