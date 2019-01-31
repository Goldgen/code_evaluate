#include<stdio.h>

int main()
{
    int i=0;
    for (i=0; i<=100; i++) {
        if(i==96)
            printf("%d",i);
        else if((i%3==0)&&(i%10==6))
            printf("%d ",i);
    }
    
    
    
    
    
    
    
    
    return 0;
}
