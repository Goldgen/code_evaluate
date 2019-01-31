#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int a,b,c;int ret=0;
    for(int i=100;i<=999;i++){
        a=i%10;
        a=a*a*a;
        c=i/100;
        c=c*c*c;
        b=i/10%10;
        b=b*b*b;

        if(a+b+c==i&&ret==1){printf(" %d",i);ret=1;}
        else if(a+c+b==i){printf("%d",i);ret=1;}

    }
    return 0;
}
