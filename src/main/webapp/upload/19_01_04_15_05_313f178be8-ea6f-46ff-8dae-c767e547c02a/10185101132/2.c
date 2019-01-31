#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c;
    a = b = c = 0;
    scanf("%d+%d=%d", &a, &b, &c);

    int tempa = a;
    int tempb = b;

    int flag = 0;
    int cnt = 0;
    while(tempa <= 1e9 && a != 0){
        if(tempa + b == c){
            flag = 1;
            break;
        }
        cnt++;
        tempa *= 10;
    }

    if(flag == 0){
        cnt = 0;
        while(tempb <= 1e9){
            if(a + tempb == c){
                break;
            }
            cnt--;
            tempb *= 10;
        }
    }

    printf("%d", cnt);

    return 0;
}
