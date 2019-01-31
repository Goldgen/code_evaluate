#include<stdio.h>
int main()
{
    double height=50;
    double s=0;
    int i=2;
    while(i<=10)
    {
        s += height*2;
        height/=2;
        i++;
    }
    printf("%.3lf %.3lf",s+100,height);
    return 0;
}



