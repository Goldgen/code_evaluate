#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    int number[1000];
    int subscript[1000];
    int i,j,p;
    scanf("%d",&size);
    for(i=0;i<size;++i){
        scanf("%d",&number[i]);
    }
    scanf("%d",&j);

    p=0;
    for(i=0;i<size;++i){
        if(number[i]==j)
        {
            subscript[p]=i;
            ++p;
        }

    }
    if(p==0)printf("ERROR");
    else{
    for(i=0;i<p;++i){
        if(i==0)
        printf("%d",subscript[i]);
        else
            printf(" %d",subscript[i]);

    }
    }
    return 0;
}