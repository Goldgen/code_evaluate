
#include <stdio.h>
#include <math.h>

int main(void)
{
    int n,m,i,a;
    for(n = 100;n <= 1000;n++){
        m = n;
        a = 0;
        for (i = 0;m != 0;i++){
            a = a + (int)pow(m%10,3);
            m = (m-m%10)/10;
        }
        if (a == n){
            printf("%d",n);
            if (n != 407)
                printf(" ");
        }
    }
    return 0;
}
