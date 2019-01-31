#include <stdio.h>
#include <limits.h>

int main()
{
    int a1,a2,a3,a4,a5,a6,a7,a8,addtion1,
    b1,b2,b3,b4,b5,b6,b7,b8,addtion2=0;
    
    scanf("%d %d %d\n%d %d %d\n%d %d",&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8);
    addtion1=a1+a2+a3+a4+a5+a6+a7+a8;
    if(addtion1<=INT_MAX)
      printf("%d\n",addtion1);
    
    scanf("%d,%d,%d\n%d,%d,%d\n%d,%d",&b1,&b2,&b3,&b4,&b5,&b6,&b7,&b8);
    addtion2=b1+b2+b3+b4+b5+b6+b7+b8;
    if(addtion2<=INT_MAX)
    printf("%d",addtion2);
    
    return 0;
    
}
