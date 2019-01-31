#include <stdio.h>
#include <stdlib.h>

/*（循环）用户输入 n ，输出如样例所示的行数为 n 的等式三角形。
其中第 k 行形如：
1+2+3+…+k=k+…+3+2+1
每行的等号对齐。
【输入】
一个正整数 n，1 ≤ n < 10
【输出】
如样例所示的行数为 n 的等式三角形，行末无空格，最后一行行末无换行。
【样例输入1】
3
【样例输出1】
    1=1
  1+2=2+1
1+2+3=3+2+1
【样例输入2】
5
【样例输出2】
        1=1
      1+2=2+1
    1+2+3=3+2+1
  1+2+3+4=4+3+2+1
1+2+3+4+5=5+4+3+2+1
*/

int main()
{
    int n;
    scanf("%d", &n);
    if(n==1) printf("1=1");
    else{
        for(int i=0; i<n-1; i++){
            for(int k=0; k<(n-i-1)*2; k++){
                printf(" ");
            }
            printf("1");
            for(int k=0; k<i; k++){
                printf("+%d", k+2);
            }
            printf("=%d", i+1);
            for(int k=0; k<i; k++){
                printf("+%d", i-k);
            }
            printf("\n");
        }
        printf("1");
        for(int i=0; i<n-1; i++){
            printf("+%d", i+2);
        }
        printf("=%d", n);
        for(int i=0; i<n-1; i++){
            printf("+%d", n-1-i);
        }
    }
    return 0;
}
