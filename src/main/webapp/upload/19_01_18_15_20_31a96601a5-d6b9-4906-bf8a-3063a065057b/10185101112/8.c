#include <stdio.h>

int main()
{
    int a,b,c,max_ab,max_abc,min_ab,min_abc,result;
    scanf("%d %d %d",&a,&b,&c);
    max_ab=(a>b)?a:b;
    max_abc=(max_ab>c)?max_ab:c;
    min_ab=(b>a)?a:b;
    min_abc=(c>min_ab)?min_ab:c;
    result=a+b+c-min_abc-max_abc;
    printf("%d",result);
}
