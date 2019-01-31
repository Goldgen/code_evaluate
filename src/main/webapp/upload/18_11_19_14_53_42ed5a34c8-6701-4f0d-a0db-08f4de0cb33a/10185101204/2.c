#include <stdio.h>
int sum(int);
int main()
{int a=0,b=0;
scanf("%d",&a);
b=sum(a);
printf("%d",b);
}
int sum(int m){
int n;
if(m<10)
    return m;
n=m%10;
    return sum(m/10)+n;

}
