#include <stdio.h>
#include <stdlib.h>
int number[100];
int answer(int x){


    if(x>0)
    return number[x];
}


int main()
{
    int i,j;

    number[0]=1;
    for(i=1;number[i-1]!=0;++i){
        scanf("%d",&number[i]);
    }
    for(j=i-2;j>=1;--j){
        printf("%d",answer(j));
		if(j!=1)printf(" ");}
    return 0;
}