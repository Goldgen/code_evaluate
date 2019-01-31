#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, k;
    char a[100][1050], b[100][1050];
    scanf("%s%s", a[0], b[0]);
    for(i=1; i<100; i++)
    {
        if(a[i-1][0]!='#')
            scanf("%s%s", a[i], b[i]);
    }

    for(j=1; j<100; j++)
    {
        int x;
		x = strlen(b[j]);
        char c[x];
        for(k=0; k<x; k++)
            c[k] = a[i][k];
    }
}
