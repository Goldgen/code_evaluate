#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int a;
    unsigned int b=1;
    unsigned int c=0;
    unsigned int d;
    scanf("%d",&a);
    
    for(int i=0;i<32;i++)
    {
		d=a&b;
        if(d==1)
        {
            c++;
        }
        a=a>>1;
    }
    printf("%u",c);


}
