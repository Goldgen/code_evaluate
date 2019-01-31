#include <stdio.h>
#include <stdlib.h>
int M(){
int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
      for(j=1;j<=i;j++){
        if(j<=i) printf(" ");
        printf("%d * %d =%3d",j,i,i*j);
        }
        if(i<n) printf("\n");}
}

int main()
{
    M();
    return 0;
}
