#include<stdio.h>
#include<math.h>
int main()
{
    float fahr;
    int c;
    scanf("%f",&fahr);
    c=(int)(5*(fahr-32)/9.0);
    printf("celsius = %d",c);
    return 0;
}