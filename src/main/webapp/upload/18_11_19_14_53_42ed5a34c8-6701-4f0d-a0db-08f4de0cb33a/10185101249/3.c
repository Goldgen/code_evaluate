#include <stdio.h>
int n=0;
int m=0;
void pr(){
    int a;
	scanf("%d",&a);
    if(a>0)
    {
        n++;
        m++;
        pr();
        if(n == m)
        {
            printf("%d",a);
            n--;
        }
        else
        printf(" %d",a);
        return 0;
    }
}
int main()
{
    pr();
return 0;
}
