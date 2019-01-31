#include <stdio.h>
#include <stdlib.h>

/*（循环）编写程序输出这样的三位数：
这个三位数本身正好等于其每个数字的立方和。
（如 153 = 1的立方+5的立方+3的立方）数字间用空格隔开。*/

int main()
{
    int n;
    for(n=100; n<400; n++){
        int a, b, c;
        a = n/100;//百位
        b = (n-a*100)/10;//十位
        c = n%10;//个位
        if(a*a*a + b*b*b + c*c*c ==n)
            printf("%d ", n);
    }
    for(int n=400; n<1000; n++){
        int a, b, c;
        a = n/100;//百位
        b = (n-a*100)/10;//十位
        c = n%10;//个位
        if(a*a*a + b*b*b + c*c*c ==n)
            printf("%d", n);
    }
    return 0;
}
