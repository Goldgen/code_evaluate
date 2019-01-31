#include <stdio.h>
#include <stdlib.h>

/*（循环）输入两个int类型正整数n（保证不会以0开头）和m，
输出n的位数以及n经过循环右移m位后的数（保证不会以0开头）
(两者以一个空格分隔) 。
样例输入1：
1 1
样例输出1：
1 1
样例输入2：
123 2
样例输出2：
3 231
样例输入3：
1001234 4
样例输出3：
7 1234100
样例输入4：
2100012345 55
样例输出4：
10 1234521000*/

int main()
{
    int n, m, a[100], b[100],c[100];
    scanf("%d%d", &n, &m);
    int i=0, cnt=0;
    do{
        a[i++]=n%10;//a[0]为个位
        n=n/10;
        cnt++;
    }while(n!=0);
    printf("%d ", cnt);
    for(int ii=0,jj=cnt-1; ii<cnt; ii++,jj--){
        b[jj]=a[ii];
    }
    for(int j=0; j<cnt; j++){
        c[(j+m)%cnt]=b[j];
    }
    for(int k=0; k<cnt; k++){
        printf("%d", c[k]);
    }
    return 0;
}
