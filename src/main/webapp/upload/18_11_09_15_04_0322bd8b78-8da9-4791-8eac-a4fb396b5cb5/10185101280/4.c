#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
if(n>=0&&n<=100)
    {
  long long int b=1;
        int a;
   

for(a=1;a<=n;a++){
    b*=a;

}



        long long int g;
        g=b%20181111;
        printf("%lld",g);

    }
    return 0;
}
