#include <stdio.h>
#include <stdlib.h>

/*（循环）用户输入n（100>=n>=4）,你的程序是输出直角三角形的边；
样例输入：
4
样例输出：
*
**
* *
****
*/

int main()
{
    int n;
    scanf("%d", &n);
    printf("*\n");
    for(int j=0; j<n-2; j++){
        printf("*");
        for(int k=0; k<j; k++){
            printf(" ");
        }
        printf("*\n");
    }
    for(int i=0; i<n; i++){
        printf("*");
    }
    return 0;
}
