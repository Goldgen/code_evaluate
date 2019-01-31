#include <stdio.h>

int main (void)

{
    int line = 0;
    int num[10] = {1,1,1,1,1,1,1,1,1,1};
    int i = 1;
    int t = 0;

    scanf("%d",&line);

    for(i=1;i<=line;i++)
    {
        for(t=i-1;t>=0;t--)
        {
            printf("%d",num[t]);
            if (t!=0)
                printf(" ");
            if (t!=0&&t!=i)
                num[t] += num[t-1];
        }
        if(i!=line)
            printf("\n");
    }

}
