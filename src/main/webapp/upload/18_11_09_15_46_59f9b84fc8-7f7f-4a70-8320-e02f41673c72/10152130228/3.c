#include <stdio.h>
#include <stdlib.h>

/*（循环）编写程序，输出字母组成的菱形图案，
第一行为1个字母A，第二行为3个字母B，
以此类推，第n行为2n-1个对应的字母，以后每行递减。
整数n(2≤n≤13)由键盘输入。输出行末没有空格。
样例输入：
5
样例输出：
    A
   BBB
  CCCCC
 DDDDDDD
EEEEEEEEE
 FFFFFFF
  GGGGG
   HHH
    I
*/

int main(){
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){ //0到n-1
        for(int k=0; k<n-i-1; k++)
            printf(" ");
        for(int m=0; m<2*i+1; m++)
            printf("%c", 65+i);
        printf("\n");
    }
    for(int i=0; i<n-2; i++){ //n到2n-3
        for(int k=0; k<i+1; k++)
            printf(" ");
        for(int m=0; m<2*n-2*i-3; m++)
            printf("%c", 65+n+i);
        printf("\n");
    }
    for(int i=0; i<n-1; i++)
        printf(" ");
    printf("%c", 65+2*n-2);
    return 0;
}
