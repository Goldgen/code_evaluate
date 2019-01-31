#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

int main(){
   double data[200];
   double sum=0;
   for(int i=0;i<100;i++){
        double x=1;
    for(int j=2*(i+1);j<=2*(i+1)+2;j++)
    x*=j;
   data[i]=1.0/x;

   }
   for(int i=0;i<100;i++){
    if(i==0||i%2==0)
        sum+=data[i];
    else
        sum-=data[i];
   }
   printf("%.4lf",sum*4.0+3.0);

	return 0;
}
