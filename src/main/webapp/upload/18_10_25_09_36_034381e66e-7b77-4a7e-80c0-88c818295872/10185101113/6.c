#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0;
    int j=1;
    scanf("%d",&n);
    printf("*\n");
    for(int i=2;i<n;i++)
    {
        printf("*");
        j++;
        for(int m=j;m>2;m--)
        {
           printf(" ");
        }
        printf("*\n");

    }
    for (int i=0;i<n;i++)
    {
        printf("*");
    }


    return 0;
}
