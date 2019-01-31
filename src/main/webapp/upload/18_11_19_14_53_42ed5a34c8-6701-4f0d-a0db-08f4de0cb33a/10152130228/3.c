#include <stdio.h>
#include <stdlib.h>

/*请编写递归函数，
该函数每次调用时将会让用户输入一个正整数，如果输入0或者负数时程序结束。
函数将按照逆序输出整数值。
例如用户输入 10 20 30 0 程序输出 30 20 10*/


int main()
{
    int a[100], cnt=0;
    while(1){
        int k;
        scanf("%d", &k);
        if(k<=0) break;
        else{
            a[cnt++] = k;
        }
    }
    for(int i=0; i<cnt-1; i++) printf("%d ", a[cnt-i-1]);
    printf("%d", a[0]);
    return 0;
}
