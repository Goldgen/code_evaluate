#include <stdio.h>
int main(){
	int i,j,n=0;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        if(i==1)
        {for(j=1;j<=n;++j)
            printf("*");
            printf("\n");
            }
        else if(i==n)
        {for(j=1;j<=n;++j)
            printf("*");

            }
        else
        {
            printf("*");
            for(j=2;j<=n-1;++j)
                printf(" ");


                printf("*\n");

        }

    }
     getchar();
	return 0;
}
