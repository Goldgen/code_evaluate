#include <stdio.h>

int main()
{
    int n,i,a,b;
    int count =0;
    scanf("%d",&n);
    for (i=1;i<32;i++)
    {
        a=n<<(32-i);
        b=a>>31;
        if (b!=0)
           count ++;
    }
    printf("%d",count);
}
