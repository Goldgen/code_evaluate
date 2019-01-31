#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

int main(){
   double data[11][5];
   double a=2.0;
   for(int i=0;i<11;i++){
    data[i][0]=a;
    a+=0.1;
   }
   for(int i=0;i<11;i++){
    data[i][1]=1/data[i][0];
   }
   for(int j=2;j<=4;j++){
    for(int i=0;i<11;i++)
        data[i][j]=pow(data[i][0],j);
   }
   for(int i=0;i<11;i++){
    for(int j=0;j<5;j++)
      if(j<4)
        printf("%.4lf ",data[i][j]);
      else
        printf("%.4lf",data[i][j]);

    printf("\n");
   }
	return 0;
}
