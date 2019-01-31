#include<stdio.h>
#include <ctype.h>
int main()
{
    int a=0;
    int b=0;
    int i=0;
    int j=0;
    scanf("%d %d",&a,&b);
    for (i=a; i<=b; i++)
    {
        if(isgraph(i))
        {
            printf("%-8.d%c",i,i);
               if(i<b)
                  printf("\n");
            j++;
        }
        
    }
    if(j==0)
        printf("NONE");
    return 0;
}
