#include <stdio.h>
int main()
{
    char monthone[12][15] = {"January", "February", "March", "April", "May", "June"};
    char monthtwo[12][15] = {"July", "August", "September", "October", "November", "December"};
    int m;
    scanf("%d", &m);
    if(m<= 6)
        puts(monthone[m-1]);
    else
        puts(monthtwo[m-7]);
}