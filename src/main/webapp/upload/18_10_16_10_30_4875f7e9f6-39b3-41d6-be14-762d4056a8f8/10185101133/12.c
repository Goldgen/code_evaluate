#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b;
    char ch;
    scanf("%lf%c%lf",&a,&ch,&b);
    if(ch==43)
        printf("%.3lf",a+b);
    else if(ch==42)
        printf("%.3lf",a* b);
    else if(ch==45)
        printf("%.3lf",a-b);
    else if(ch==47)
        printf("%.3lf",a/b);

    return 0;
}
