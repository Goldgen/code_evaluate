#include<stdio.h>
int main()
{
    int n;
    char a='*';
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(1==i||i==n)
        {
            for(int j=1;j<=n;j++)
                printf("%c",a);
            if(1==i)printf("\n");
        }
        else
        {
            for(int v=1;v<=n;v++)
            {
                if(v==1||v==n)
                    printf("%c",a);
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
	return 0;
}
