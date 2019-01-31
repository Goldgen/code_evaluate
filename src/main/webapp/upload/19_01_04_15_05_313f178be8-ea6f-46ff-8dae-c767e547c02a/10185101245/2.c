#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int f(int x)
{
    int count=0;
    while(x>0)
    {
        x/=10;
        count++;
    }
    return (count-1);
}

int main()
{
    int a,b,c;
scanf("%d+%d=%d",&a,&b,&c);
int temp1,temp2,count1,count2;
temp1=c/a;
count1=f(temp1);
if(a*pow(10,count1)+b==c)
    printf("%d",count1);
else
{
    temp2=c/b;
    count2=f(temp2);
    if(b*pow(10,count2)+a==c)
        printf("%d",-count2);
}
    return 0;
}
