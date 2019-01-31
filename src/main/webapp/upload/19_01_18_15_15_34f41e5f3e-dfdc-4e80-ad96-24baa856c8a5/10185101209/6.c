#include<stdio.h>

int main()
{
    int num1,num2,num3=1;

        scanf("%d %d",&num1,&num2);
        while(num3!=0)
        {
            if(num1==num2)
            {
                printf("最大公约数是: %d",num1);
                return 0;
            }
            else if(num1>num2)
            {
                num3=num1%num2;
                num1=num3;
            }
            else
            {
                num3=num2%num1;
                num2=num3;
            }
        }
        printf("最大公约数是: %d",num1>num2?num1:num2);
}
