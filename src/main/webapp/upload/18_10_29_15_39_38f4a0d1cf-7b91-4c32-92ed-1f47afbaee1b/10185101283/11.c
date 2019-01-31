#include<stdio.h>
int main()
{
    int a,b,c,d,x,y,z;
    for(a=100;a<=406;a ++)
    {
        b=a/100;  //b 为百位数
        c=a/10-b*10;  //c 为个位数
        d=a%10; //d 为十位数
        x=b*b*b;
        y=c*c*c;
        z=d*d*d;
        if(a==x+y+z)
        {
            printf("%d ",a);
        }
    }
    printf("407");
    return 0;
}
