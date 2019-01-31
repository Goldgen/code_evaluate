#include <stdio.h>
#include <stdlib.h>
void cheng(int n){
    int i,j;
for(i=1;i<=n;i++)
    {for(j=1;j<=i;j++)
        printf(" %d * %d = %2d",j,i,j*i);
        if(i<n)
            printf("\n");
        }}
int main()
{int n;
    scanf("%d",&n);
cheng(n);
return 0;

}
