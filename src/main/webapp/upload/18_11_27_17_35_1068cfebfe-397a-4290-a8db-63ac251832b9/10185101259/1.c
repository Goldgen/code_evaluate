#include <stdio.h>
#include <stdlib.h>
void fuc(double string[]){
    int i;
    float sum=0.0;
    for(i=0;i<5;i++){
    string[i]=1.0/string[i];
    if(i==0)
        printf("%.2lf",string[i]);
    else
        printf(" %.2lf",string[i]);
   sum=sum+string[i];}
   printf("\n%.6lf",sum);}
int main()
{   int i;
   double arry[5];
   for(i=0;i<5;i++)
   scanf("%lf",&arry[i]);
   fuc(arry);
   return 0;
}


