#include <stdio.h>

int main()
{
int i,j,n;
scanf("%d",&n);

for(i=1;i<=n;++i){
    for(j=1;j<=i;j++){
   printf(" %d * %d =",j,i);
   if(i*j<10)
   printf("  %d",i*j);
   else
    printf(" %d",i*j);
    }
    if(j<=n)
printf("\n");
}
return 0;
}