#include <stdio.h>

int main()
{
    int i, j, k, i1, i2;
    char n;
    int num1[100], num2[100], num[100];

    for(i=0; ; i++)
    {
        scanf("%c", &n);
        if(n=='\n')
            break;
        else
            num1[i] = (int)n;
    }
    i1 = i;
    for(i=0; ; i++)
    {
        scanf("%c", &n);
        if(n=='\n')
            break;
        else
            num2[i] = (int)n;
    }
    i2 = i;
    if(i1<i2)
        i = i2;
    else
        i = i1;

    for(j=0; j<i; j++, i1--, i2--)
    {
     num[j] = num[j]+num1[i1]+num2[i2];
     if(num1[i1]+num2[i2]>9)
        num[j+1] = 1;
    }

    for(k=j-1; k>=0; k--)
        printf("%d", num[k]);
}
