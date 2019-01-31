#include<stdio.h>

int main()
{
    int num=0,count=0;

    for(int a=1;a<10;a++){
        for(int b=0;b<10;b++){
            for(int c=0;c<10;c++){
                num=100*a+10*b+c;
                if(num==a*a*a+b*b*b+c*c*c){
                    count++;
                    if(count!=1)
                        printf(" ");
                    printf("%d",num);
                    }
            }
        }
    }
    return 0;
}
