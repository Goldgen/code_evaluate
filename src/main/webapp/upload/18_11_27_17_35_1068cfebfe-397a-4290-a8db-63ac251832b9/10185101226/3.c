#include <stdio.h>
#include <stdlib.h>

int main()
{
    float amounts[5],a;
    long dollars[5],cents[5];
    int i;
    for(i=0;i<=4;++i)
    {
        scanf("%f",&a);
        amounts[i]=a;
    }
    for(i=0;i<=4;++i)
    {
        dollars[i]=(int)amounts[i];
    }
    for(i=0;i<=4;++i)
    {
        cents[i]=amounts[i]-dollars[i];
    }
    for(i=0;i<=4;++i)
    {
        printf("$%.2f ",amounts[i]);
    }
    return 0;
}