#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    int i,j=1;
    scanf("%d",&n);
    printf("{}");
    while(i<=pow(2,n))
    {
        printf("\n{");
        while(i<=pow(2,n))
        {
            if(i=pow(2,j))
            {
                printf("%d",j);
                j++;
                i++;
            }
            else
            {
                
            }
            
        }
        printf("}");

    }
    return 0;
}