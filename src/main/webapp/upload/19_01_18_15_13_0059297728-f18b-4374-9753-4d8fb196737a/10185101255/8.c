#include <stdio.h>

int main()
{
    int a,b,c=0;
    scanf("%d %d %d",&a,&b,&c);
    
    if((a>=b)&&(a<=c))
        printf("%d",a);
    else if((a>=c)&&(a<=b))
        printf("%d",a);
    else if((b>=a)&&(b<=c))
        printf("%d",b);
    else if ((b<=a)&&(b>=c))
        printf("%d",b);
    else if((c>=a)&&(c<=b))
        printf("%d",c);
    else if((c<=a)&&(c>=b))
        printf("%d",c);
      
 
    
    return 0;
    
    
}
