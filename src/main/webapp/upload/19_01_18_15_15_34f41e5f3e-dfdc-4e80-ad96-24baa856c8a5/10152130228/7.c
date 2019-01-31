#include <stdio.h>
#include <stdlib.h>

/*（循环）输入一个非负int类型整数，
在一行中输出该整数的二进制表示中值为1的位数。
样例输入1：
0
样例输出1：
0
样例输入2：
1
样例输出2：
1
样例输入3：
100
样例输出3：
3
样例输入4：
2100012345
样例输出4：
18
*/

int main()
{
    int n, cnt=0;
    scanf("%d", &n);
    for(int i=n; i>=1; i=i/2){
        if(i%2!=0) cnt++;
    }
    printf("%d", cnt);
    return 0;
}
