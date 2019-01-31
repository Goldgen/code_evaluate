#include <stdio.h>
void bi(int s){
    int a;
    a=s%2;
    if(s/2!=0)
    {
        bi(s/2);
        printf("%d",a);
    }
    else
        printf("%d",a);
}
int main()
{
    int n;
    scanf("%d",&n);
	bi(n);
return 0;
}
