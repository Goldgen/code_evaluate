#include <stdio.h>
int cheng(int a);

int main()
{
   int n;
   scanf("%d",&n);
   cheng(n);
   return 0;
}
int cheng(int a)
{
    int i,j,k;
    for(i=1;i<a+1;i++)
    {
        if(i>1)
            printf("\n");
        for(j=1;j<i+1;j++)
        {
            
                printf(" ");
            k=i*j;
            if(k<10)
                printf("%d * %d =  %d",j,i,k);
            else
                printf("%d * %d = %d",j,i,k);
        }
    }
}
