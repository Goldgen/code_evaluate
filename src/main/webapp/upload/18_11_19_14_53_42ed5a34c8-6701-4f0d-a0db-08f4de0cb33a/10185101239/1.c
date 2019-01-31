#include <stdio.h>
#include <stdlib.h>

float P(float x)
{

static float a=0.0,b=0.0;
a+=x;
b++;
return a/b;}

int main( ){

float c;
scanf("%f" ,&c) ;
while(c!=-1){

printf("%.2f\n" ,P(c) );
scanf("%f",&c) ;

}
return 0;
}
