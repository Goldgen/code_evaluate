#include <stdio.h>
#include<string.h>

int main()
{
    int i=1;
    double h=100.0;
    double x=h;
    while(i<10)
    {

        h=h/2;
        x=x+h*2;
        i++;

    }
    printf("%.3lf %.3lf",x,h/2);






    return 0;
}



