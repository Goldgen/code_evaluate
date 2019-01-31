#include <stdio.h>
int main(){
	int i,j,n=0;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {

        if(i==1)
            {printf("*");
            printf("\n");}
        else if(i==n)
            {for(j=1;j<=i;++j)
                printf("*");}
        else
           {


            printf("*");
            for(j=2;j<=i-1;++j)
                printf(" ");
            printf("*");
            printf("\n");}


    }
	return 0;
}
