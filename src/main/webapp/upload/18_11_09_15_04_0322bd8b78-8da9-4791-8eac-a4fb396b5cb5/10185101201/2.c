#include <stdio.h>
main()
{
	int n,i,j,t,r=0;
	scanf("%d",&n);
	t=n*2-2;
	r=t;
	for(i=1;i<=n-1;i++)
    {
        for(t=r;t>=1;t--)
            printf(" ");
            printf("1");

                for(j=2;j<=i;j++)
                    printf("+%d",j);
        printf("=%d",i);
            for(j=i-1;j>=1;j--)
                printf("+%d",j);
            printf("\n");
            r=r-2;
    }
    printf("1");
    for(i=2;i<=n;i++)
    {
        printf("+%d",i);
    }
    printf("=%d",n);
    for(i=n-1;i>=1;i--)
        printf("+%d",i);

}
