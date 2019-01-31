#include <stdio.h>
void avg(float);
int main()
{float a=0;
scanf("%f",&a);
while(a!=-1){
        avg(a);
    scanf("%f",&a);}}
void avg(float n){
static float ag=0,sum=0;
static int t=1;
sum+=n;
ag=sum/t;
t++;
printf("%.2f\n",ag);
}