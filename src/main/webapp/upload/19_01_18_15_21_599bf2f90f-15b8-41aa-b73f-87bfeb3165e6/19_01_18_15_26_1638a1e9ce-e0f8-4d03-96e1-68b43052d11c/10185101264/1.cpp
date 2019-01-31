#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int a,b;
    
    scanf("%d %d",&a,&b);
    if(a<b)
        printf("%d",b);
    else
        printf("%d",a);
    
    return 0;
}
