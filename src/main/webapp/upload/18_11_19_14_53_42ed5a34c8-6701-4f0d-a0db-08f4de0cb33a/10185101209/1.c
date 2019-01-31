#include<stdio.h>

int main()
{
    float n=0.0f, sum=0.0f;
    int count=0;

    do{
        scanf("%f",&n);
        if(n<0)
            break;
        sum += n;
        count++;
        printf("%.2f\n",sum/(float)count);
    }while(n<10000);
}