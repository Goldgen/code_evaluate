#include <stdio.h>
#include <stdlib.h>

/*循环）用户输入4-10的整数n，你的程序输出*号组成的相框（n*n）；
如，用户输入4
输出：
****
*  *
*  *
****
*/
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        printf("*");
    }
    printf("\n");
    for(int j=0; j<n-2; j++){
        printf("*");
        for(int k=0; k<n-2; k++){
            printf(" ");
        }
        printf("*\n");
    }
    for(int i=0; i<n; i++){
        printf("*");
    }
    return 0;
}
