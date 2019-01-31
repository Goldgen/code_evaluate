#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    int a,b,c; int i = 1;
    for (num=100;num<1000;num++){
        a = num/100;//百位
        b = (num-a*100)/10;//十位
        c = num%10;//个位
        if (num==a*a*a+b*b*b+c*c*c){
            printf("%d",num);
            if(i<=3){
                printf(" ");
                i++;
            }
        }
        else continue;
    }

    return 0;
}
