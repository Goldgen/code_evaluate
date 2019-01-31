#include <stdio.h>
int main()
{
    unsigned int x,p,n,one,two,result;
    scanf("%und %und %und",&x,&p,&n);
    one=15-p;
    two=16-n;
    result=x<<one;
    result=result>>two;
    printf("%und",result);
    return 0;

}
