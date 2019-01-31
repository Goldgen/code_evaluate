#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c,i,p=1;
    scanf("%d+%d=%d",&a,&b,&c);
    for(i=0;i<20;i++){
        if(a*p+b==c){
            printf("%d",i);
            break;}
        p=p*10;
    }
}
