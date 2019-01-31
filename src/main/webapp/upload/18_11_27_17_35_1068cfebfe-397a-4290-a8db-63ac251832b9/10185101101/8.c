#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    int number[1000];

    int i,j,k,max;
    int p[1000];
    scanf("%d",&size);
    for(i=0;i<size;++i){
        scanf("%d",&number[i]);
    }


    j=0;

    for(i=0;i<size-1;++i){

        if(number[i+1]==number[i])
            ++p[j];
        else
            ++j;
        }
max=p[0];
for(k=0;k<j;++k){
    if(p[k]>max)
        max=p[k];
}
printf("%d",max+1);

    return 0;
}
