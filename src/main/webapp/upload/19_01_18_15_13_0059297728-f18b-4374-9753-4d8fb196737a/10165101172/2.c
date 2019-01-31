#include <stdio.h>
#include <string.h>
#include <math.h>

int a[40] = {[0 ... 39] = 0};

int main(void)
{
    int x,p,n;
    int i;
    int sum = 0,wei = 0;
    scanf("%d %d %d",&x,&p,&n);
    
    for (i = 0;x != 0;i++){
        a[i] = x%2;
        x /= 2;
        wei++;
    }
    wei--;
    for (i = p-n+1;i <= p;i++){
        sum += (int)pow(2.0,wei-i)*a[i];
    }
    
    printf("%d",sum);
        
    
    return 0;
}
