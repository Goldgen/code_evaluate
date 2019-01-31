#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

int main(){
   double amounts[5];
   long dollars[5];
   long cents[5];
   double b;
   int c;

   
    scanf("%lf %lf %lf %lf %lf",&amounts[0],&amounts[1],&amounts[2],&amounts[3],&amounts[4]);
    for(int i=0;i<5;i++)
        dollars[i]=amounts[i];
    for(int i=0;i<5;i++)
    cents[i]=(amounts[i]*100-dollars[i]*100);
   for(int i=0;i<5;i++){
    b=amounts[i]*100.0;
    c=(int)b;
    amounts[i]=c/100.0;
   }
for(int i=0;i<5;i++){
if(i<4)
   printf("$%.2lf ",amounts[i]);
   else
    printf("$%.2lf",amounts[i]);
   }

	return 0;
}
