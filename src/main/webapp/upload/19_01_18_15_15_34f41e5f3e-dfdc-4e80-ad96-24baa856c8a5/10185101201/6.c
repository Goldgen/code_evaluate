#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    while(1)
        {

            if(a>=b)
                {
                    if (a%b==0)
                        {
                            printf("最大公约数是:%d",b);
                            break;
                        }
                    else
                        a=a%b;
                }
            else
                {
                    if (b%a==0)
                        {
                            printf("最大公约数是:%d",a);
                            break;
                        }
                    else
                        b=b%a;
                }
        }
}