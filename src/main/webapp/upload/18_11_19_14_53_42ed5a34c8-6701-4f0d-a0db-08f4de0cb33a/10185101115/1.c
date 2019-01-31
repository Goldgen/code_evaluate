#include <stdio.h>
#include <stdlib.h>

float aver(float n);

float aver(float n)
{
    int i=0;
    float b;
    float all=0;
    while(scanf("%f",&n)!=EOF)
    {
        if(n==-1)
            break;
        i++;
        all+=n;
        b=all/i;
        printf("%.2f\n",b);
    }

    return 0;
}

int main()
{float n;
aver(n);
return 0;

}
