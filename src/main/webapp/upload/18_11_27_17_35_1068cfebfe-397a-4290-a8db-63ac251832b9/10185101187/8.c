#include <stdio.h>

int main()
{
    int n, i, j, x=1, y=1;
    scanf("%d", &n);
    int data[n];
    for(i=0; i<n; i++)
        scanf("%d", &data[i]);

    for(i=0; i<n; i++)
    {
        if(data[i]==data[i+1])
            for(j=i, x=1; data[j]==data[j+1]; j++)
                x++;
        if(y<x)
            y = x;
    }
    printf("%d", y);
}
