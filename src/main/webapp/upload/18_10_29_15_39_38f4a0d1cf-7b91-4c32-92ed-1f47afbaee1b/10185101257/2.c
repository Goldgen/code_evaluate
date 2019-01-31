#include <stdio.h>
int main()
{
    double e=0;
    for(int i=0;i<11;++i)
    {
        if(i==0)
            e+=1;
        else
        {
            double E=1;
            for(int j=1;j<=i;++j)
                E*=j;
            e+=1/E;
        }
    }
    printf("%.6lf",e);
    return 0;
}
