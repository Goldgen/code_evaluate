
#include<stdio.h>
int main()
{
    int m,n,a=0,b=0;
    for(m=2;m<=100;m++)
    {if(m%2==0){
        a=a+m;}
    }

    for(n=1;n<100;n++)
    {
        if(n%2!=0){
        b=b+n;}
    }
    printf("%d %d",b,a);
    return  0;
}
