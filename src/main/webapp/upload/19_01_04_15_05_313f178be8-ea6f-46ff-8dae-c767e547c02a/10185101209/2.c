#include<stdio.h>
#include<math.h>

int main()
{
    char str[101];
    int a, b, c;
    int n=0,num;

    gets(str);
    sscanf(str,"%d+%d=%d",&a,&b,&c);
    for(n=0; num!=0; n++){
        num=c;
        num-=(a*pow(10,n)+b);
        if(num<0)
            break;
    }
    if(num==0)
        printf("%d",n-1);
    if(num!=0){
        for(n=0; num!=0; n++){
            num=c;
            num-=(a+b*pow(10,n));
        }
        printf("%d",-(n-1));
    }
    return 0;
}