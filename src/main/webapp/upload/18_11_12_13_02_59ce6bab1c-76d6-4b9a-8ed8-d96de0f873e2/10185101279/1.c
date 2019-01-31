#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
void sheet(int x);
int main()
{
   int n;
   scanf("%d",&n);
   sheet(1);
   for(int i=2;i<=n;i++){
        printf("\n");
    sheet(i);}

   return 0;

}
void sheet(int x){
    for(int i=1;i<=x;i++)
        printf(" %d * %d =%3d",i,x,i*x);
}





































































































