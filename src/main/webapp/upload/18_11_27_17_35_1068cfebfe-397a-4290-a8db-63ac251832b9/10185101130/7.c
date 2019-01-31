#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,s;
    int c=0,j=0;
    scanf("%d",&n);
    int arr[n];
    for(i = 0;i <= n-1;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&s);
    for(i = 0;i <= n-1;i++)
    {
        if(arr[i] == s)
        {
            c++;
            if(c == 1)
            {
                printf("%d",i);
                j = 1;
            }
            else
                printf(" %d",i);
        }
    }
    if(j == 0)
        printf("ERROR");
    return 0;
}
