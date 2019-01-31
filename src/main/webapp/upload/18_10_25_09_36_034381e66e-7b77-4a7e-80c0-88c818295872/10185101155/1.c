#include <stdio.h>
int main()
{
    double h = 100.0;
    double total = 0.0;
    int n =1;
    while (n<=10)
    {
        total = total + h;
        h = h/2;
        n++;

    }
    printf("%.3lf %.3lf",2*total-100.0,h);
    return 0;

}
