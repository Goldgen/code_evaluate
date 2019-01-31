#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long int x,p,n,a,b,c;
    scanf("%lu %lu %lu",&x,&p,&n);
    a = x/(unsigned long int)pow(2.0,(double)(p+1-n));
    b = a/(unsigned long int)pow(2.0,(double)n);
    c = a - b*(unsigned long int)pow((double)2,(double)n);
    printf("%lu",c);
    return 0;

}