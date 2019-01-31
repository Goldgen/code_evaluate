#include <stdio.h>
float avg(float,int);
int main()
{
    float n;
    int i=1;
    while(scanf("%f",&n)&&n!=-1)
    {
        printf("%.2f\n",avg(n,i));
        i++;
    }
    return 0;
}
float avg(float n,int i)
{
    static float res=0;
    res+=n;
    return res/i;
}
