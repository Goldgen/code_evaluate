#include <stdio.h>

int main()
{
    int i;
    char c[100];
    scanf("%s",c);
    for(i=0;i<8;i++)
        if(c[i]<'p')
            printf("%d",2+(c[i]-97)/3);
        else if(c[i]<'t')
            printf("7");
        else if(c[i]<'w')
            printf("8");
        else
            printf("9");
    return 0;
}
