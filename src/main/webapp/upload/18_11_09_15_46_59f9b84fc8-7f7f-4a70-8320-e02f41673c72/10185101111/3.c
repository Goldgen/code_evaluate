#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=2*n-2;i++){
        if(i<=n){
            for(int a=1;a<=n-i;a++)
                printf(" ");
            for(int b=1;b<=2*i-1;b++)
                printf("%c",'A'+i-1);
                printf("\n");
        }
        else{
            for(int c=1;c<=i-n;c++)
                printf(" ");
            for(int d=1;d<=2*(2*n-i)-1;d++)
                printf("%c",'A'+i-1);
                printf("\n");
        }
    }
    for(int e=1;e<=n-1;e++)
        printf(" ");
    printf("%c",'A'+2*n-2);
}