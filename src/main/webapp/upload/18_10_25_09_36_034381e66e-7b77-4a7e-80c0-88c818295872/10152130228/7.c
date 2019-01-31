#include <stdio.h>
#include <stdlib.h>

/*（循环）用户输入奇数n（100>n>7）,你的程序是输出等腰三角形的边；
样例输入：
7
样例输出：
   *
  * *
 *   *
*******
*/
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n-1; i=i+2){
        //if(i%2!=0) printf("\n");
        if(i==0){
            for(int j=0; j<(n-1)/2; j++){
                printf(" ");
            }
            printf("*");
        }
        else{
            for(int j=0; j<(n-1)/2-i/2; j++){
                printf(" ");
            }
            printf("*");
            for(int j=0; j<i-1; j++){
                printf(" ");
            }
            printf("*");

        }
        printf("\n");
    }
    for(int i=0; i<n; i++){
        printf("*");
    }
    return 0;
}
