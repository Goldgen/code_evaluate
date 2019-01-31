#include <stdio.h>
#include <stdlib.h>

int index8(int e)
{
    long long int k=0,sum=1;
    do{
        sum=sum*8;
        k=k+1;
    }
    while(k<e);
    return sum;

}

int main()
{   long long int a,b,c,all=0,wei=0;
    scanf("%lld",&a);
    b=a;
    c=b%10;
    do{
        b=b/10;

        wei=wei+1;
    }
    while(b>0);
    int e,i=0;
    a=a/10;
   do
    {
        e=a%10;
        if(e!=0)
        all=all+e*index8(i+1);
        else
        all=all;
        a=a/10;
        i=i+1;
    }
    while(i<wei-1);
    printf("%d",all+c);
    return 0;
}



