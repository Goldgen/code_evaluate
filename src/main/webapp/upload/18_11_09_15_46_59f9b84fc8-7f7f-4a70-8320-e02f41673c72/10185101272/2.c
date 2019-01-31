#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const int MAX=20181111;
int main()
{
    int i;
    double fi[100]={};
    double sum=0;
    fi[0]=fi[1]=1;
    for(i=2;i<95;i++) fi[i]=fi[i-1]+fi[i-2];
    for(i=1;i<=50;i++)
        sum+=fi[i+1]/fi[i];
    printf("%.2lf",sum);
    return 0;
}
