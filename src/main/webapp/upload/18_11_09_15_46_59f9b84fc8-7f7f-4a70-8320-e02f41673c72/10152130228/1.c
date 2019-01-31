#include <stdio.h>
#include <stdlib.h>

/*（循环）请编写程序输出100以内能被3整除且个位数为6的所有整数。
两个数之间用空格隔开，行末没有空格。*/

int main()
{
    int a[111], cnt=0;
    for(int i=0; i<=100; i++){
        if(i%3==0 && i%10==6) a[cnt++]=i;
    }
    for(int i=0; i<cnt-1; i++){
        printf("%d ", a[i]);
    }
    printf("%d", a[cnt-1]);
    return 0;
}
