#include <stdio.h>
#include <string.h>
int main()
{
    int a,b,i,j;
    char f[100][100];
    scanf("%d %d\n",&i,&j);
    for(a=1;a<=i;a++)
    {
        for(b=1;b<=j;b++)
            scanf("%d",&f[a][b]);
    }
    for(b=1;b<=j;b++)
    {
        for(a=1;a<=i;a++)
        {
            printf("%d",f[a][b]);
            if(a<i)
                printf(" ");
        }
        if(a==i+1&&b<j)
            printf("\n");
    }
    return 0;
}
