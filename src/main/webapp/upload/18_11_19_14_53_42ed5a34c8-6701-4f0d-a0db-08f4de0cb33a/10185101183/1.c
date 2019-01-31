#include <stdio.h>
float average(float a,float b)
{
    return (a+b)/2;
}
int main()
{
   float a[100]={};
   float c=0;
   scanf("%f",&a[0]);
   printf("%.2f\n",a[0]);
   float b=a[0];
   for(int i=0;a[i]>0;i++)
   {
       scanf("%f",&a[i+1]);
       if(a[i+1]<0)
        break;
       b+=a[i+1];
       c=b/(i+2);
       printf("%.2f\n",c);
   }
}
