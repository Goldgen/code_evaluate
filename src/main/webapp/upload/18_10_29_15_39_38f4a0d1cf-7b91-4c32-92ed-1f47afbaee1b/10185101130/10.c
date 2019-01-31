#include<stdio.h>
#include<math.h>
int main(void)
{
    int n;
    int m=0;
    scanf("%d",&n);
    printf("{}\n");
    for(int i = 1;i < pow(2,n);i++)
    {
        m=0;
        printf("{");
        for(int j = 0;j <= n;j++)
        {
            if((i>>j)==0)
            {
                printf("%d",j-1);
                break;
            }
            else if(((1&(i>>j))!=0)&&(i>>(j+1))!=0)
            {
                printf("%d,",j);
                m+=1;
            }

        }
        if((m+1) == n)
            printf("}");
        else
            printf("}\n");
    }
    return 0;

}
