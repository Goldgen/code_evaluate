#include <stdio.h>
int main()
{
    double one,two,fuhao,result;
    scanf("%le",&one);
    fuhao=getchar();
    scanf("%le",&two);
    if(fuhao=='+')
        result=one+two;
    if(fuhao=='-')
        result=one-two;
    if(fuhao=='*')
        result=one*two;
    if(fuhao=='/')
        result=one/two;
    printf("%.3f",result);
    return 0;
}

