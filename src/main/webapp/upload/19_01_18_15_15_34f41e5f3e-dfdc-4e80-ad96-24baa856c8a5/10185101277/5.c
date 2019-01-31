#include <stdio.h>
int main(void)
{
    int i,n=101,s=0;
    for(i=1;i<n;i+=2)
       s+=i;
    printf("%d ",s);
    s=0;
    for(i=2;i<n;i+=2)
        s+=i;
    printf("%d",s);
    return 0;
}