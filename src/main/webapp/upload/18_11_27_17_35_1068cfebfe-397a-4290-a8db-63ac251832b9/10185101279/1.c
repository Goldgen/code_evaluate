#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

int main(){
   double arr[5];
   double b[5];
   double sum=0;
   for(int i=0;i<5;i++)
    scanf("%lf",&arr[i]);
    for(int i=0;i<5;i++){
        b[i]=1.0/arr[i];
        sum+=b[i];

    }
    for(int i=0;i<5;i++){
            if(i==4)
        printf("%.2lf",b[i]);
    else
        printf("%.2lf ",b[i]);
        }
    printf("\n%lf",sum);


	return 0;
}
