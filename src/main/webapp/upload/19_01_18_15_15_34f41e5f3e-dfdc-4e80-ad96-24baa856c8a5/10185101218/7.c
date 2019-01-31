#include<stdio.h>
#include<limits.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    c=0;
    b=(INT_MAX-1)/2+1;
    while(b>0){
        if(b>a)
            b/=2;
        else{
            c++;
            a-=b;
        }
    }
    printf("%d",c);
    return 0;
}
