#include <stdio.h>
#include <stdlib.h>
int convert(int number,int i){
    if(i>0)    convert(number/2,i-1);

    if(number%2==0)
        printf("0");
    else
        printf("1");



}

int main()
{
    int num;int j;int tempo;
    scanf("%d",&num);
    tempo=num;
    for(j=0;num!=0;++j)
        num/=2;
    convert(tempo,j-1);
    return 0;
}
