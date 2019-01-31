#include<stdio.h>

void reverse(int n,int k);//增加k是为了看空格；

int main(void)
{
    int num = 1;
    int k = 0;
    reverse(num,k);
    return 0;
}

void reverse(int n,int k)
{
    k++;
    if(n > 0)
    {

        scanf("%d",&n);
        reverse(n,k);
        if(n > 0 && k == 1)
            printf("%d",n);
        else if(n > 0)
            printf("%d ",n);
    }
    return;
}
