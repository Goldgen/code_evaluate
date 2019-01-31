#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
    int a,b,c,d,e,f;
    scanf("%d",&a);
	printf("%d",a);
    f=0;
    for(b=a-2;b>=a/2;b--)
    {
        for(d=2;d<=sqrt(b);d++)
        {
            if(b%d==0)
            {
                b--;
                d=2;
                continue;
            }
        }
        c=a-b;
        for(e=2;e<=sqrt(c);e++)
        {
            if(c%e==0)
            {
                f++;
            }
        }
        if(f!=0||c>b){
            f=0;
            continue;}
        else{
            f=0;
            printf("=%d+%d",c,b);}
    }
    return 0;
}



