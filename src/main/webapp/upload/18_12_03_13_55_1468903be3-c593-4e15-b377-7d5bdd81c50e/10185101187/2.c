#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    char in[n][30];

    for(j=0; j<n; j++)
    {
        i = 0;
        while(getchar()!='\n')
        {
            in[j][i] = getchar();
            i++;
        }
    }

    for(j=n-1; j>=0; j--)
    {
        if(j!=n-1)
            printf("\n");
        i = 0;
        while(in[j][i]!='\0')
            printf("%c", in[j][i]);
    }
}
