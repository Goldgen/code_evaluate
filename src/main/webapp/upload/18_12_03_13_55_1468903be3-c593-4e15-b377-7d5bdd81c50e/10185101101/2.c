#include <stdio.h>
#include <stdlib.h>


int main()
{
    char string[10][30];
    int i,j,k;
    scanf("%d",&j);
    for(i=0;i<=j;++i){
        gets(string[i]);
    }
    int max=0;
    max=string[0][0];
    for(i=122;i>64;--i){
        for(k=0;k<=j;++k){
            if(string[k][0]==i)
                printf("%s\n",string[k]);

        }
    }
    return 0;
}