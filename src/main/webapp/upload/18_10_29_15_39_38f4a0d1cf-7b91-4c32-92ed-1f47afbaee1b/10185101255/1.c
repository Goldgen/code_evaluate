
#include<stdio.h>


int main()
{
    int a,b,c=0;
    
    for (a=1; a<=14; a++) {
        for (b=1; b<=20; b++) {
            for (c=3; c<=300; c+=3) {
                if((a+b+c==100)&&(a*7+b*5+c/3==100))
                    printf("%d %d %d",a,b,c);
            }
        }
    }
    return 0;
}
