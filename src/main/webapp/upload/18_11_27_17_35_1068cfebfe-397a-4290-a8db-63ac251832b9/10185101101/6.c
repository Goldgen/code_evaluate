#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    int number[1000];
    int i,j,k,p;
    scanf("%d",&size);
    for(i=0;i<size;++i){
        scanf("%d",&number[i]);
    }
    scanf("%d",&j);
    if(size==1)
        printf("ERROR");
    p=0;
    for(i=0;i<size;++i){
        if(number[i]==j)
        {
            for(k=i;k<size-1;++k){
                number[k]=number[k+1];
            }
        ++p;
        }

    }
    if(p==0)printf("ERROR");
    else{
    for(i=0;i<size-1;++i){
        if(i==0)
        printf("%d",number[i]);
        else
            printf(" %d",number[i]);

    }
    }
    return 0;
}