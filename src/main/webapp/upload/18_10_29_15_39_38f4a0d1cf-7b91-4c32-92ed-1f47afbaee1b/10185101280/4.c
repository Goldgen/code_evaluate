#include <stdio.h>
void main()
{
float x,max,min;

scanf("%f",&x);
max=x ;
min=x;
while ( x>=0 )

{
if(x>max)max=x;
if(x<min) min=x;
scanf("%f",&x);

}
printf("最高成绩是: %.2f, 最低成绩是: %.2f",max,min);
}
