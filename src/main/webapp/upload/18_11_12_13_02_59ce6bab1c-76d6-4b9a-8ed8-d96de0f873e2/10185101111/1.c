#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
void chen(int n)
{
    int cont;
    for(int i=1;i<n;i++){
        for(int m=1;m<=i;m++){
            cont=m*i;
            printf("%2d *%2d =%3d",m,i,cont);
        }
        printf("\n");
    }
    for(int a=1;a<=n;a++){
        cont=a*n;
        printf("%2d *%2d =%3d",a,n,cont);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    chen(n);
}